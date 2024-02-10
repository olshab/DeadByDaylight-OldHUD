#include "K31SurvivorDetection.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"
#include "TimerObject.h"

class AK31Power;
class AActor;

void UK31SurvivorDetection::OnRep_OriginatingPower(AK31Power* oldPower)
{

}

void UK31SurvivorDetection::OnRep_IsFullyLockedOn()
{

}

void UK31SurvivorDetection::OnRep_ChargeableComponent()
{

}

void UK31SurvivorDetection::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
{

}

void UK31SurvivorDetection::Authority_OnChargeCompleted(bool completed, const TArray<AActor*>& instigatorsForCompletion)
{

}

void UK31SurvivorDetection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31SurvivorDetection, _originatingPower);
	DOREPLIFETIME(UK31SurvivorDetection, _chargingLockedOnChargeableComponent);
	DOREPLIFETIME(UK31SurvivorDetection, _isFullyLockedOn);
}

UK31SurvivorDetection::UK31SurvivorDetection()
{
	this->_hinderedStatusEffectClass = NULL;
	this->_brokenStatusEffectClass = NULL;
	this->_killerInstinctStatusEffectClass = NULL;
	this->_brokenStatusEffect = NULL;
	this->_originatingPower = NULL;
	this->_chargingLockedOnChargeableComponent = NULL;
	this->_immuneToDetectionTimer = CreateDefaultSubobject<UTimerObject>(TEXT("ImmuneToDetectionTimer"));
	this->_survivorIsBelowDroneTimer = CreateDefaultSubobject<UTimerObject>(TEXT("SurvivorIsBelowDroneTimer"));
	this->_showSurvivorOnRadarTimer = CreateDefaultSubobject<UTimerObject>(TEXT("ShowSurvivorOnRadarTimer"));
	this->_isFullyLockedOn = false;
	this->_overlappingDrones = TArray<AK31Drone*>();
	this->_overlappingActiveDrones = TArray<AK31Drone*>();
	this->_lastActiveTime = -1.000000;
}
