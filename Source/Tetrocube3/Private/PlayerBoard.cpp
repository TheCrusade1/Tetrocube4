// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerBoard.h"
#include "BlockBase.h"
#include "TetrominoBase.h"
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
	InitializeQueue();
}

void APlayerBoard::InitializeQueue()
{
	for (int8 i = 0; i < 4; i++) {
		AddTetrominoToQueue();
	}
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

}

// Called to bind functionality to input
void APlayerBoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

