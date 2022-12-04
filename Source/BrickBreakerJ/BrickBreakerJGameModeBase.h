// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BrickBreakerJGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKERJ_API ABrickBreakerJGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ABrickBreakerJGameModeBase();
	int LimitCreate = 0;

private:
	//The Inventory of this Actor
	UPROPERTY()
		class APaddle* Paddle;

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
