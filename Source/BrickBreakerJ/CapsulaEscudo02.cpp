// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEscudo02.h"

// Called when the game starts or when spawned
void ACapsulaEscudo02::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Escudo Nuclear";
	TipoCapsula = "Capusula de escudo Nuclear";
	TipoEfecto = "Anade Escudo Nuclear al paddle";
	TipoDuracion = "10 segundos";

}

void ACapsulaEscudo02::Generar()
{
	/*GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Generando una Capsula de Escudo01"));*/
}

