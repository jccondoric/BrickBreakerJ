// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaArma02.h"

//ACapsulaArma02::ACapsulaArma02()
//{
//	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}

// Called when the game starts or when spawned
void ACapsulaArma02::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Laser";
	TipoCapsula = "Capusula de Laser";
	TipoEfecto = "Anade Laser al paddle";
	TipoDuracion = "Mientras este Activo";

}

void ACapsulaArma02::Generar()
{
	/*GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Generando una Capsula de Arma02"));*/
}
