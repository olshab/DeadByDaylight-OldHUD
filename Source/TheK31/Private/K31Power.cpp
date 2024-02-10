#include "K31Power.h"
#include "ActorPoolInitializer.h"
#include "K31Scanner.h"
#include "Interactor.h"
#include "K31PowerChargePresentationItemProgressComponent.h"
#include "AuthoritativeActorPoolComponent.h"
#include "Net/UnrealNetwork.h"
#include "K31PowerChargePresentationPowerFadeComponent.h"

void AK31Power::OnRepPowerState() const
{

}

void AK31Power::OnRepPowerCooldownTimer()
{

}

void AK31Power::Authority_UpdateHasteBasedOnScannedSurvivors() const
{

}

void AK31Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK31Power, _powerState);
	DOREPLIFETIME(AK31Power, _powerCooldownTimer);
}

AK31Power::AK31Power()
{
	this->_powerChargePresentationItemProgressComponent = CreateDefaultSubobject<UK31PowerChargePresentationItemProgressComponent>(TEXT("Power UI Presenter"));
	this->_powerChargePresentationPowerFadeComponent = CreateDefaultSubobject<UK31PowerChargePresentationPowerFadeComponent>(TEXT("Power UI Fade Presenter"));
	this->_survivorDetectionClass = NULL;
	this->_effects = TArray<FStatusEffectSpawnData>();
	this->_authority_scannerHasteEffect = NULL;
	this->_scannerHasteEffectClass = NULL;
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("Power Interactor"));
	this->_dronePoolInitializer = CreateDefaultSubobject<UActorPoolInitializer>(TEXT("DronePoolInitializer"));
	this->_dronePool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("Drone Pool"));
	this->_scanner = CreateDefaultSubobject<UK31Scanner>(TEXT("Radar"));
	this->_powerState = EK31PowerState::Deployment;
	this->_survivorClawTrapComponentClass = NULL;
	this->_powerCooldownTimer = NULL;
	this->_hasteCurveBasedOnScannedSurvivors = NULL;
}
