// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"

// Sets default values
AWorldPosition::AWorldPosition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldPosition::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("This is a Warning!"));
	UE_LOG(LogTemp, Error, TEXT("System overload cannot compute!!"));
	UE_LOG(LogTem, Display, TEXT("All will be ok now!"));
}

// Called every frame
void AWorldPosition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

