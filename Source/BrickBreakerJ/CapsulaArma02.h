// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaArma02.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKERJ_API ACapsulaArma02 : public ACapsula
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
public:
	virtual void Generar() override;


};
