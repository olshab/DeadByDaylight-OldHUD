#include "K33Power.h"
#include "Interactor.h"
#include "AuthoritativeActorPoolComponent.h"
#include "Net/UnrealNetwork.h"
#include "K33PowerChargePresentationItemProgressComponent.h"
#include "ActorPoolInitializer.h"
#include "ChargeableComponent.h"
#include "PowerChargeComponent.h"
#include "BoxPlayerOverlapComponent.h"

void AK33Power::OnRep_TurretPlacers()
{

}

void AK33Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK33Power, _turretPlacers);
}

AK33Power::AK33Power()
{
	this->_tailAttackChargeableComponent = CreateDefaultSubobject<UChargeableComponent>(TEXT("Tail Attack Chargeable"));
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("Interactor"));
	this->_interactionVolume = CreateDefaultSubobject<UBoxPlayerOverlapComponent>(TEXT("Interaction Volume"));
	this->_powerChargePresentationItemProgress = CreateDefaultSubobject<UK33PowerChargePresentationItemProgressComponent>(TEXT("PowerChargePresentationItemProgress"));
	this->_k33PowerCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("K33PowerCharge"));
	this->_feetActorPool = NULL;
	this->_killerStatusEffects = TArray<TSubclassOf<UStatusEffect>>();
	this->_survivorStatusEffects = TArray<TSubclassOf<UStatusEffect>>();
	this->_killerTunnelComponentClass = NULL;
	this->_quadrupedComponentClass = NULL;
	this->_controlStationSelectorComponentClass = NULL;
	this->_survivorDetectionComponentClass = NULL;
	this->_turretDamageComponentClass = NULL;
	this->_turretPlacerComponentClass = NULL;
	this->_k33HuskClass = NULL;
	this->_turretPlacers = TArray<UK33TurretPlacer*>();
	this->_feetPoolSize = 32;
	this->_feetActorClass = NULL;
	this->_k33Husk = NULL;
	this->_turretPoolInitializer = CreateDefaultSubobject<UActorPoolInitializer>(TEXT("TurretPoolInitializer"));
	this->_turretPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("TurretPool"));
}
