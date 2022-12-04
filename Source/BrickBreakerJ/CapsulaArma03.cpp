// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaArma03.h"
//
//ACapsulaArma03::ACapsulaArma03()
//{
//	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}

// Called when the game starts or when spawned
void ACapsulaArma03::BeginPlay()
{
	Super::BeginPlay();
	Nombre = "Metralladora";
	TipoCapsula = "Capusula de Metralladora";
	TipoEfecto = "Anade Metralladora al paddle";
	TipoDuracion = "3 segundos";

}

void ACapsulaArma03::Generar()
{
	/*GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Emerald, TEXT("Generando una Capsula de Arma03"));*/
}
