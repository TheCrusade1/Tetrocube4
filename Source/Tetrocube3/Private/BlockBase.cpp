// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockBase.h"
#include "Components/BoxComponent.h"

// Sets default values
ABlockBase::ABlockBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BlockCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Block Collision"));
	RootComponent = BlockCollision;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block Mesh"));
	BlockMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABlockBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABlockBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

