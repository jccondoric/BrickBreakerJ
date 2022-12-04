// Copyright Epic Games, Inc. All Rights Reserved.


#include "BrickBreakerJGameModeBase.h"
#include "Paddle.h"

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

}

void ABrickBreakerJGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
