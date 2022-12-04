// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaEscudo03.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKERJ_API ACapsulaEscudo03 : public ACapsula
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

public:
	virtual void Generar() override;
};
