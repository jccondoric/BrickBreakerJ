// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEscudo01.h"

//ACapsulaEscudo01::ACapsulaEscudo01()
//{
//	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}

// Called when the game starts or when spawned
void ACapsulaEscudo01::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Escudo Repelente";
	TipoCapsula = "Capusula de escudo Repelente";
	TipoEfecto = "Anade Escudo Repelente al paddle";
	TipoDuracion = "5 segundos";

}

void ACapsulaEscudo01::Generar()
{
	/*GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Emerald, TEXT("Generando una Capsula de Escudo01"));*/
}

