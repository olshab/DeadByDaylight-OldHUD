#include "Barrel.h"
#include "BarrelInteraction.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"
#include "ChargeableComponent.h"
#include "Interactor.h"

void ABarrel::SetDissolveStarted(bool isDissolveStarted)
{

}

void ABarrel::OnRep_OnLocationChanged()
{

}

void ABarrel::OnBarrelDespawnCosmeticsComplete()
{

}

void ABarrel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABarrel, _barrelLocation);
}

ABarrel::ABarrel()
{
	this->_barrelInteraction = CreateDefaultSubobject<UBarrelInteraction>(TEXT("BarrelInteraction"));
	this->_barrelInteractionKiller = CreateDefaultSubobject<UBarrelInteraction>(TEXT("BarrelInteractionKiller"));
	this->_barrelInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("BarrelInteractionChargeable"));
	this->_barrelInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("BarrelInteractionChargeableKiller"));
	this->_barrelInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("BarrelInteractionZone"));
	this->_barrelInteractor = CreateDefaultSubobject<UInteractor>(TEXT("BarrelInteractor"));
	this->_barrelStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelStaticMesh"));
	this->_extractorStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExtractorStaticMesh"));
	this->_barrelType = EBarrelType::None;
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
}
