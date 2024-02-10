#include "PhantomTrap.h"
#include "Net/UnrealNetwork.h"
#include "WipeAwayPhantomTrapInteraction.h"
#include "Interactor.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "ChargeableComponent.h"
#include "TerrorRadiusEmitterComponent.h"
#include "Components/BoxComponent.h"

class AActor;
class ACamperPlayer;
class UPrimitiveComponent;
class ASlasherPlayer;

void APhantomTrap::SetIsInUse(bool inUse)
{

}

void APhantomTrap::RetrievePerkFlags(const FGameplayTag silentTrapTag, const FGameplayTag phantomCollisionTag)
{

}

void APhantomTrap::OnTrapReset()
{

}

void APhantomTrap::OnTrapActivated()
{

}

void APhantomTrap::Multicast_DestroyTrap_Implementation(ACamperPlayer* playerDestroyingTrap)
{

}

bool APhantomTrap::IsTrapSet_Implementation() const
{
	return false;
}

bool APhantomTrap::IsTrapDeactivating() const
{
	return false;
}

bool APhantomTrap::IsTrapActive() const
{
	return false;
}

bool APhantomTrap::IsSilentTrigger() const
{
	return false;
}

void APhantomTrap::InitializeTerrorRadiusEmitter(ASlasherPlayer* owningSlasher)
{

}

bool APhantomTrap::HasKillerTeleported() const
{
	return false;
}

bool APhantomTrap::CanActivateTrap(ACamperPlayer* camper, bool isInUse)
{
	return false;
}

void APhantomTrap::Authority_OnTriggerZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void APhantomTrap::Authority_OnTriggerZoneBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void APhantomTrap::ActivateSlasher(ASlasherPlayer* slasher)
{

}

void APhantomTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APhantomTrap, _hasTrapBeenSetOff);
	DOREPLIFETIME(APhantomTrap, _hasTrapBeenDestroyed);
}

APhantomTrap::APhantomTrap()
{
	this->_phantomHasCollision = false;
	this->_silentTrapTrigger = false;
	this->_isDeactivating = false;
	this->_slasherOwner = NULL;
	this->_slowdownInTrapZoneEffect = NULL;
	this->_terrorRadiusEmitter = CreateDefaultSubobject<UTerrorRadiusEmitterComponent>(TEXT("Terror Radius Component"));
	this->_camperOutlineDuration = 5.000000;
	this->_lineOfSightTraceMinInterval = 0.100000;
	this->_speedTolerance = 900.000000;
	this->_trapLocation = NULL;
	this->_triggerZone = NULL;
	this->_survivorSlowdownEffects = TArray<UStatusEffect*>();
	this->_wipeAwayInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("WipeAwayInteractionChargeable"));
	this->_wipeAwayInteraction = CreateDefaultSubobject<UWipeAwayPhantomTrapInteraction>(TEXT("WipeAwayInteraction"));
	this->_wipeAwayInteractor = CreateDefaultSubobject<UInteractor>(TEXT("WipeAwayInteractor"));
	this->_wipeAwayInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("WipeAwayInteractionZone"));
	this->_hasTrapBeenSetOff = false;
	this->_hasTrapBeenDestroyed = false;
	this->_isInUse = false;
	this->_isSlasherHere = false;
}
