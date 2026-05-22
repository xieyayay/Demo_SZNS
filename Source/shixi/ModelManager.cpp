// Fill out your copyright notice in the Description page of Project Settings.


#include "ModelManager.h"

// Sets default values
AModelManager::AModelManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AModelManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AModelManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

