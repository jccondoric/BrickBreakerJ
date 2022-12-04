// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorCapsulasDanio.h"
#include "CapsulaArma01.h"  
#include "CapsulaArma02.h"
#include "CapsulaArma03.h"
#include "CapsulaEscudo01.h"
#include "CapsulaEscudo02.h"
#include "CapsulaEscudo03.h"
ACapsula* AGeneradorCapsulasDanio::FabricarCapsula(FString NombreTipoCapsula)
{
    if (NombreTipoCapsula.Equals("Arma01")) {
        return GetWorld()->SpawnActor<ACapsulaArma01>(ACapsulaArma01::StaticClass());
    }
    else if (NombreTipoCapsula.Equals("Arma02")) {
        return GetWorld()->SpawnActor<ACapsulaArma02>(ACapsulaArma02::StaticClass());
    }
    else if (NombreTipoCapsula.Equals("Arma03")) {
        return GetWorld()->SpawnActor<ACapsulaArma03>(ACapsulaArma03::StaticClass());
    }
    else if (NombreTipoCapsula.Equals("Escudo01")) {
        return GetWorld()->SpawnActor<ACapsulaEscudo01>(ACapsulaEscudo01::StaticClass());
    }
    else if (NombreTipoCapsula.Equals("Escudo02")) {
        return GetWorld()->SpawnActor<ACapsulaEscudo02>(ACapsulaEscudo02::StaticClass());
    }
    else if (NombreTipoCapsula.Equals("Escudo03")) {
        return GetWorld()->SpawnActor<ACapsulaEscudo03>(ACapsulaEscudo03::StaticClass());
    }
    return nullptr;
}
