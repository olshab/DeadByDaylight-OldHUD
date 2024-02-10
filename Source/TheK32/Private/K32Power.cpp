#include "K32Power.h"
#include "K32EmpScoreComponent.h"
#include "Interactor.h"
#include "AuthoritativeActorPoolComponent.h"
#include "Net/UnrealNetwork.h"
#include "BoxPlayerOverlapComponent.h"
#include "K32PowerChargePresentationItemProgressComponent.h"
#include "K32PowerChargePresentationPowerFadeComponent.h"
#include "ChargeableComponent.h"

void AK32Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK32Power, _killerPodVisionController);
	DOREPLIFETIME(AK32Power, _aimingCrosshairComponent);
}

AK32Power::AK32Power()
{
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("Interactor"));
	this->_interactionVolume = CreateDefaultSubobject<UBoxPlayerOverlapComponent>(TEXT("Interaction Volume"));
	this->_powerChargePresentationItemProgressComponent = CreateDefaultSubobject<UK32PowerChargePresentationItemProgressComponent>(TEXT("Killer Pod Spawning Power UI Presenter"));
	this->_powerChargePresentationPowerFadeComponent = CreateDefaultSubobject<UK32PowerChargePresentationPowerFadeComponent>(TEXT("Killer Pod Spawning Power UI Fade Presenter"));
	this->_antiCampZoneIdentifierComponent = NULL;
	this->_killerPodVisionControllerClass = NULL;
	this->_killerPodTargetIndicatorClass = NULL;
	this->_killerPodSpawningIndicatorClass = NULL;
	this->_blindnessProtectionStatusEffect = NULL;
	this->_undetectableWhileInPodsStatusEffect = NULL;
	this->_overclockStatusEffectClass = NULL;
	this->_killerPodVisionController = NULL;
	this->_killerPodTargetIndicator = NULL;
	this->_killerPodSpawningIndicator = NULL;
	this->_aimingCrosshairComponent = NULL;
	this->_killerProjectileSpawnChargeableComponent = CreateDefaultSubobject<UChargeableComponent>(TEXT("Projectile Spawn Chargeable Component"));
	this->_empPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("Emp Pool"));
	this->_empScoreComponent = CreateDefaultSubobject<UK32EmpScoreComponent>(TEXT("EmpScoreComponent"));
	this->_recentlyTeleportedToSurvivor = NULL;
}
