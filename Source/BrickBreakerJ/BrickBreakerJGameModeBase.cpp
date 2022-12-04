// Copyright Epic Games, Inc. All Rights Reserved.


#include "BrickBreakerJGameModeBase.h"
#include "Paddle.h"
#include "GeneradorCapsulasDanio.h"

ABrickBreakerJGameModeBase::ABrickBreakerJGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABrickBreakerJGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	LimitCreate = 2;//Limite de creacion del Paddle
	//Create 4 Inventory
	for (int i = 0; i <= 10; i++)//por mas que diga que cree 10 solo creara 2 paddle
	{
		int c = 0;
		c = c + i;
		APaddle* SpawnedPaddle = GetWorld() -> SpawnActor<APaddle>(APaddle::StaticClass());
		if (c <= LimitCreate - 1)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
			Paddle = SpawnedPaddle;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s has been created"),*Paddle->GetName()));
		}
		
	}

	AGeneradorCapsulas* GeneradorArmas = GetWorld()->SpawnActor<AGeneradorCapsulasDanio>(AGeneradorCapsulasDanio::StaticClass());
	ACapsula* capsula = GeneradorArmas->GetCapsula("Arma01");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Purple, FString::Printf(TEXT("Capsula Fabricada %s"), *capsula->GetNombre()));
	
	capsula = GeneradorArmas->GetCapsula("Arma02");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Capsula Fabricada %s"), *capsula->GetNombre()));

	capsula = GeneradorArmas->GetCapsula("Arma03");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald, FString::Printf(TEXT("Capsula Fabricada %s"), *capsula->GetNombre()));

	capsula = GeneradorArmas->GetCapsula("Escudo01");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Capsula Fabricada %s"), *capsula->GetNombre()));

	capsula = GeneradorArmas->GetCapsula("Escudo02");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("Capsula Fabricada %s"), *capsula->GetNombre()));

	capsula = GeneradorArmas->GetCapsula("Escudo03");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Capsula Fabricada %s"), *capsula->GetNombre()));
}

void ABrickBreakerJGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
