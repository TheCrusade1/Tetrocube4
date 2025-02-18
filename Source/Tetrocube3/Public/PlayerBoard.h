// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tetrocube3/Tetrocube3.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerBoard.generated.h"

class UStaticMeshComponent;
class UCameraComponent;
class UBoxComponent;
class ABlockBase;
class ATetrominoBase;
struct FInputActionValue;

UCLASS()
class TETROCUBE3_API APlayerBoard : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerBoard();

	UPROPERTY(VisibleAnywhere, Category = "GAME DATA")
	TArray<ABlockBase*> BlocksInPlay;
	UPROPERTY(VisibleAnywhere, Category = "GAME DATA")
	TArray<ATetrominoBase*> Queue;
	UPROPERTY(VisibleAnywhere, Category = "GAME DATA")
	ATetrominoBase* Hold;
	UPROPERTY(VisibleAnywhere, Category = "GAME DATA")
	ATetrominoBase* TetrominoInPlay;
	UPROPERTY(VisibleAnywhere, Category = "GAME DATA")
	int ActiveSliceY = 100;
	UPROPERTY(EditAnywhere, Category = "GAME DATA")
	int EndSlice = 1100;
	UPROPERTY(VisibleAnywhere, Category = "GAME DATA")
	float timeRemaining = 0.f;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void InitializeQueue();	
	void AddTetrominoToQueue();
	void ExitGame(const FInputActionValue& Value);
	void GetInputLocationCursor(const FInputActionValue& Value);
	void GetInputLocationTouch(const FInputActionValue& Value);
	void SetTetrominoMoveDirection(FVector InputLocation);
	void SetTetrominoMoveDirectionEnding(const FInputActionValue& Value);
	void CheckSetInPlay();
	void ShowInputLocation(FVector inputLocation);
	void DropEnded();
	EBoardStatus StatusPicker();

	//Attributes for player board
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	UBoxComponent* LeftCollision;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	UBoxComponent* RightCollision;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	UBoxComponent* BottomCollision;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	UBoxComponent* TopCollision;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	UBoxComponent* InputRaycastCollider;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	UStaticMeshComponent* BoardMesh;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	UCameraComponent* BoardCam;

	//Spawns and Location
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "SPAWNS & LOCATIONS")
	USceneComponent* TetrominoSpawn;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "SPAWNS & LOCATIONS")
	USceneComponent* TopCenter;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "SPAWNS & LOCATIONS")
	USceneComponent* HoldLocation;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "SPAWNS & LOCATIONS")
	USceneComponent* MiddleCube;

	//Blocks Tetrominos
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "TETROMINO TYPES")
	TSubclassOf<ATetrominoBase> I_Mino;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "TETROMINO TYPES")
	TSubclassOf<ATetrominoBase> J_Mino;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "TETROMINO TYPES")
	TSubclassOf<ATetrominoBase> L_Mino;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "TETROMINO TYPES")
	TSubclassOf<ATetrominoBase> O_Mino;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "TETROMINO TYPES")
	TSubclassOf<ATetrominoBase> S_Mino;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "TETROMINO TYPES")
	TSubclassOf<ATetrominoBase> T_Mino;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "TETROMINO TYPES")
	TSubclassOf<ATetrominoBase> Z_Mino;

	//Inputs
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Input")
	class UInputMappingContext* TetrominoMappingContext;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Input")
	class UInputAction* MoveTetrominoActionCursor;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Input")
	class UInputAction* MoveTetrominoActionTouch;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Input")
	class UInputAction* ExitGameAction;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Input")
	class UInputAction* HoldAction;

	UPROPERTY(VisibleAnywhere, Category = "GAME DATA")
	EBoardStatus BoardStatus = EBoardStatus::EBS_Free;

	APlayerController* PlayerControllerRef;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
