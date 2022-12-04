// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEscudo03.h"

//ACapsulaEscudo01::ACapsulaEscudo01()
//{
//	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}

// Called when the game starts or when spawned
void ACapsulaEscudo03::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Escudo Antiproyectil";
	TipoCapsula = "Capusula de escudo AntiProyectil";
	TipoEfecto = "Anade Escudo AntiProyectil al paddle";
	TipoDuracion = "8 segundos";

}

void ACapsulaEscudo03::Generar()
{
	/*GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Emerald, TEXT("Generando una Capsula de Escudo01"));*/
}
