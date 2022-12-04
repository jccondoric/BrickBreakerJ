// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"

// Sets default values
ACapsula::ACapsula()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsula::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Generar la Capsula %s"), *GetNombre()));
}

