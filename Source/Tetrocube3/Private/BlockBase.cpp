// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockBase.h"
#include "Components/BoxComponent.h"

// Sets default values
ABlockBase::ABlockBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BlockCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Block Collision"));
	RootComponent = BlockCollision;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block Mesh"));
	BlockMesh->SetupAttachment(RootComponent);
	
	BlockCollision->OnComponentBeginOverlap.AddDynamic(this, &ABlockBase::SetColliding);
	BlockCollision->OnComponentEndOverlap.AddDynamic(this, &ABlockBase::UnSetColliding);

}

void ABlockBase::SetCollisionToStatic()
{	
	BlockCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	BlockCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Overlap);
	BlockCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);
}

// Called when the game starts or when spawned
void ABlockBase::BeginPlay()
{
	Super::BeginPlay();

}

void ABlockBase::SetColliding(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	bColliding = true;
}

void ABlockBase::UnSetColliding(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bColliding = false;
}


