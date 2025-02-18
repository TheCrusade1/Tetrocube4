// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerBoard.h"
#include "BlockBase.h"
#include "TetrominoBase.h"
#include "Tetrocube3/Tetrocube3.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Constructor
APlayerBoard::APlayerBoard()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Builds Board
	//Makes the Board Mesh
	BoardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Board Mesh"));
	RootComponent = BoardMesh;

	//Sets Left Collision
	LeftCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Left Collider"));
	LeftCollision->SetupAttachment(RootComponent);
	LeftCollision->SetBoxExtent(FVector(50, 50, 700));
	LeftCollision->SetRelativeLocation(FVector(-500, 0, 750));

	//Sets Right Collision
	RightCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Right Collider"));
	RightCollision->SetupAttachment(RootComponent);
	RightCollision->SetBoxExtent(FVector(50, 50, 700));
	RightCollision->SetRelativeLocation(FVector(600, 0, 750));

	//Sets Bottom Collision
	BottomCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Bottom Collider"));
	BottomCollision->SetupAttachment(RootComponent);
	BottomCollision->SetBoxExtent(FVector(600, 50, 50));
	BottomCollision->SetRelativeLocation(FVector(50, 0, 0));

	//Sets Top Collision
	TopCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Top Collider"));
	TopCollision->SetupAttachment(RootComponent);
	TopCollision->SetBoxExtent(FVector(600, 50, 50));
	TopCollision->SetRelativeLocation(FVector(50, 0, 1500));

	//Sets Input Raycast Collider
	InputRaycastCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Input Raycast Collider"));
	InputRaycastCollider->SetupAttachment(RootComponent);
	InputRaycastCollider->SetBoxExtent(FVector(5000, 100, 5000));
	InputRaycastCollider->SetRelativeLocation(FVector(0, 0, 0));

	//Sets Board Camera
	BoardCam = CreateDefaultSubobject<UCameraComponent>(TEXT("Board Camera"));
	BoardCam->SetupAttachment(RootComponent);
	BoardCam->SetRelativeLocationAndRotation(FVector(-100, 1700, 900), FRotator(0, -90, 0));


	//Spawns and Location
	//Tetromino Spawn
	TetrominoSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Tetromino Spawn"));
	TetrominoSpawn->SetupAttachment(RootComponent);
	TetrominoSpawn->SetRelativeLocation(FVector(-950, 0, 100));

	//Top Center
	TopCenter = CreateDefaultSubobject<USceneComponent>(TEXT("Top Center"));
	TopCenter->SetupAttachment(RootComponent);
	TopCenter->SetRelativeLocation(FVector(0, 0, 1200));

	//Hold Location
	HoldLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Hold Location"));
	HoldLocation->SetupAttachment(RootComponent);
	HoldLocation->SetRelativeLocation(FVector(900, 0, 900));

	//Middle Cube
	MiddleCube = CreateDefaultSubobject<USceneComponent>(TEXT("Middle Cube"));
	MiddleCube->SetupAttachment(RootComponent);
	MiddleCube->SetRelativeLocation(FVector(50, -650, 1500));

}

// Called when the game starts or when spawned
void APlayerBoard::BeginPlay()
{
	Super::BeginPlay();

	PlayerControllerRef = Cast<APlayerController>(GetController());
	if (PlayerControllerRef) {
		PlayerControllerRef->bShowMouseCursor = true;
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerControllerRef->GetLocalPlayer());
		if (Subsystem) {
			Subsystem->AddMappingContext(TetrominoMappingContext, 1);

		}
	}

	InitializeQueue();
}

void APlayerBoard::AddTetrominoToQueue()
{
	for (auto& Mino : Queue) {
		FVector position = Mino->GetActorLocation();
		position.Z += 300;
		Mino->SetPosition(position);

	}

	uint8 minoType = FMath::RandRange(0, 6);
	//Insert at position 0 in THE Queue so that Pop() always gets the last one added
	switch (minoType) {
	case 0:
		Queue.Insert(GetWorld()->SpawnActor<ATetrominoBase>(
			I_Mino,
			TetrominoSpawn->GetComponentLocation(),
			TetrominoSpawn->GetComponentRotation()
		), 0);
		break;
	case 1:
		Queue.Insert(GetWorld()->SpawnActor<ATetrominoBase>(
			T_Mino,
			TetrominoSpawn->GetComponentLocation(),
			TetrominoSpawn->GetComponentRotation()
		), 0);
		break;
	case 2:
		Queue.Insert(GetWorld()->SpawnActor<ATetrominoBase>(
			L_Mino,
			TetrominoSpawn->GetComponentLocation(),
			TetrominoSpawn->GetComponentRotation()
		), 0);
		break;
	case 3:
		Queue.Insert(GetWorld()->SpawnActor<ATetrominoBase>(
			J_Mino,
			TetrominoSpawn->GetComponentLocation(),
			TetrominoSpawn->GetComponentRotation()
		), 0);
		break;
	case 4:
		Queue.Insert(GetWorld()->SpawnActor<ATetrominoBase>(
			S_Mino,
			TetrominoSpawn->GetComponentLocation(),
			TetrominoSpawn->GetComponentRotation()
		), 0);
		break;
	case 5:
		Queue.Insert(GetWorld()->SpawnActor<ATetrominoBase>(
			Z_Mino,
			TetrominoSpawn->GetComponentLocation(),
			TetrominoSpawn->GetComponentRotation()
		), 0);
		break;
	case 6:
		Queue.Insert(GetWorld()->SpawnActor<ATetrominoBase>(
			O_Mino,
			TetrominoSpawn->GetComponentLocation(),
			TetrominoSpawn->GetComponentRotation()
		), 0);
		break;
	}
}

// Called every frame
void APlayerBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	BoardStatus = StatusPicker();
	if (BoardStatus == EBoardStatus::EBS_DropFinished) DropEnded();
}

// Called to bind functionality to input
void APlayerBoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		EnhancedInputComponent->BindAction(MoveTetrominoActionCursor, ETriggerEvent::Triggered, this, &APlayerBoard::GetInputLocationCursor);
		EnhancedInputComponent->BindAction(MoveTetrominoActionTouch, ETriggerEvent::Triggered, this, &APlayerBoard::GetInputLocationTouch);
		//EnhancedInputComponent->BindAction(HoldAction, ETriggerEvent::Completed, this, &APlayerBoard::SwapHold);
		EnhancedInputComponent->BindAction(MoveTetrominoActionCursor, ETriggerEvent::Completed, this, &APlayerBoard::SetTetrominoMoveDirectionEnding);
		EnhancedInputComponent->BindAction(MoveTetrominoActionTouch, ETriggerEvent::Completed, this, &APlayerBoard::SetTetrominoMoveDirectionEnding);
		EnhancedInputComponent->BindAction(ExitGameAction, ETriggerEvent::Triggered, this, &APlayerBoard::ExitGame);


	}

}

void APlayerBoard::InitializeQueue()
{
	for (int8 i = 0; i < 4; i++) {
		AddTetrominoToQueue();
	}
}

void APlayerBoard::ExitGame(const FInputActionValue &Value)
{
	UKismetSystemLibrary::QuitGame(this, PlayerControllerRef, EQuitPreference::Quit, false);
}

void APlayerBoard::GetInputLocationCursor(const FInputActionValue& Value)
{
	FHitResult outHitResult;
	if (PlayerControllerRef) {
		PlayerControllerRef->GetHitResultUnderCursor(
			ECollisionChannel::ECC_Visibility,
			false,
			outHitResult
		);
	}
	

	SetTetrominoMoveDirection(outHitResult.Location);
}

void APlayerBoard::GetInputLocationTouch(const FInputActionValue& Value)
{
	FHitResult outHitResult;
	if (PlayerControllerRef) {
		PlayerControllerRef->GetHitResultAtScreenPosition(
			Value.Get<FVector2D>(),
			ECollisionChannel::ECC_Visibility,
			false,
			outHitResult
		);

	}
	SetTetrominoMoveDirection(outHitResult.Location);

}

void APlayerBoard::SetTetrominoMoveDirection(FVector InputLocation)
{
	if (BoardStatus == EBoardStatus::EBS_Free) {
		BoardStatus = EBoardStatus::EBS_Moving;
		CheckSetInPlay();
		TetrominoInPlay->SetInputLoc(InputLocation); //NOTE: No need for null check; TetrominoInPlay will always exsit after CheckSetInPlay()
		ShowInputLocation(InputLocation);
		FVector tetrominoLoc = TetrominoInPlay-> GetActorLocation();
		if (InputLocation.X > tetrominoLoc.X) {
			TetrominoInPlay->SetDirectionAndMoveTimers(1);
		}
		if (InputLocation.X < tetrominoLoc.X) {
			TetrominoInPlay->SetDirectionAndMoveTimers(-1);
		}
		if (InputLocation.Z > tetrominoLoc.Z) {
			TetrominoInPlay->SetDirectionAndMoveTimers(2);
		}
		if (InputLocation.Z < tetrominoLoc.Z) {
			TetrominoInPlay->SetDirectionAndMoveTimers(-2);
		}
	}
}

void APlayerBoard::SetTetrominoMoveDirectionEnding(const FInputActionValue& Value)
{
	if (TetrominoInPlay){//}&& ActiveSliceY != EndSlice) {
		BoardStatus = EBoardStatus::EBS_Dropping;
		TetrominoInPlay->Drop();
	}
}

void APlayerBoard::CheckSetInPlay()
{
	if (TetrominoInPlay == nullptr) {
		TetrominoInPlay = Queue.Pop();
		TetrominoInPlay->SetPosition(TopCenter->GetComponentLocation());
		AddTetrominoToQueue();
	}
}

void APlayerBoard::ShowInputLocation(FVector inputLocation)
{
	DrawDebugSphere(GetWorld(), inputLocation, 100.f, 10, FColor::Red);
}

void APlayerBoard::DropEnded() 
{
	BlocksInPlay.Append(TetrominoInPlay->SetCollisionToStatic());
	// TetrominoInPlay->SetBlockActiveInactivePositions(ActiveSliceY);
	TetrominoInPlay->Destroy();
	TetrominoInPlay = nullptr;
	// if(!GetWorldTimerManager().IsTimerActive(ActiveSliceHandle)){
	//	ChangeActiveSlice();
	// }
}
EBoardStatus APlayerBoard::StatusPicker()
{
	if (TetrominoInPlay && TetrominoInPlay->IsFinishedDropping()) {
		GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Blue, FString("EBS_DropFinished"));
		return EBoardStatus::EBS_DropFinished;
	}
	if (TetrominoInPlay && TetrominoInPlay->IsDropping()) {
		GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Blue, FString("EBS_Dropping"));
		return EBoardStatus::EBS_Dropping;
	}
	GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Blue, FString("EBS_Free"));
	return EBoardStatus::EBS_Free;
}



