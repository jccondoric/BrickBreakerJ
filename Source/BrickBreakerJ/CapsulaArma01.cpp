// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaArma01.h"


// Called when the game starts or when spawned
void ACapsulaArma01::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Misil";
	TipoCapsula = "Capusula de Misil";
	TipoEfecto = "Anade mililes al paddle";
	TipoDuracion = "Mientras este Activo";

}

void ACapsulaArma01::Generar()
{
	/*GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, TEXT("Generando una Capsula de Arma01"));*/
}
