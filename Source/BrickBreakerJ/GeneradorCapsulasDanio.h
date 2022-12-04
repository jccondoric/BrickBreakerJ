// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneradorCapsulas.h"
#include "GeneradorCapsulasDanio.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKERJ_API AGeneradorCapsulasDanio : public AGeneradorCapsulas
{
	GENERATED_BODY()
	virtual ACapsula* FabricarCapsula(FString NombreTipoCapsula)  override;

};
