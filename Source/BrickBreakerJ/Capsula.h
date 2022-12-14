// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class BRICKBREAKERJ_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsula();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString Nombre;
	FString TipoCapsula;//Vida,Energia,Armadura
	FString TipoEfecto;//Salud,Arma
	FString TipoDuracion;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Generar();

	FString GetNombre() { return Nombre; }
};
