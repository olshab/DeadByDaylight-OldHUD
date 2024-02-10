#include "SurvivorTrapPerk.h"
#include "GameEventData.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"

class AInteractable;
class AActor;
class UPerkTrappableComponent;
class ACamperPlayer;

void USurvivorTrapPerk::OnRep_TrappedInteractable(AInteractable* oldInteractable)
{

}

float USurvivorTrapPerk::GetTrapDuration() const
{
	return 0.0f;
}

float USurvivorTrapPerk::GetRequiredRepairProgressForSettingTrap() const
{
	return 0.0f;
}

float USurvivorTrapPerk::GetRepairProgressPercent() const
{
	return 0.0f;
}

UPerkTrappableComponent* USurvivorTrapPerk::GetPerkTrappableComponent(AInteractable* interactable) const
{
	return NULL;
}

void USurvivorTrapPerk::Authority_OnTrapTimerDone()
{

}

void USurvivorTrapPerk::Authority_OnTrapInteractionEvent(const FGameplayTag gameEvent, const FGameEventData& gameEventData)
{

}

void USurvivorTrapPerk::Authority_OnSurvivorRemoved(ACamperPlayer* survivor)
{

}

void USurvivorTrapPerk::Authority_OnRepairProgress(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

void USurvivorTrapPerk::Authority_OnKillerInteracted(const FGameplayTag gameEventTag, const FGameEventData& gameEventData)
{

}

void USurvivorTrapPerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USurvivorTrapPerk, _trappedInteractable);
	DOREPLIFETIME(USurvivorTrapPerk, _progressPercent);
	DOREPLIFETIME(USurvivorTrapPerk, _isTrapReady);
}

USurvivorTrapPerk::USurvivorTrapPerk()
{
	this->_trapType = ETrapType::None;
	this->_trappableInteractableType = NULL;
	this->_progressPercentRequirementLevels = 0.000000;
	this->_trapDurationLevels = 0.000000;
	this->_trappedInteractable = NULL;
	this->_trapInstallerComponentClass = NULL;
	this->_progressPercent = 0.000000;
	this->_isTrapReady = false;
}
