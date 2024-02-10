#include "K34TipToeModeComponent.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;

void UK34TipToeModeComponent::OnRep_TipToeModeDurationWarningTimeUpTimer()
{

}

void UK34TipToeModeComponent::OnRep_IsInTipToeModeCooldown() const
{

}

void UK34TipToeModeComponent::OnRep_IsInTipToeMode()
{

}

bool UK34TipToeModeComponent::IsInTipToeMode()
{
	return false;
}

float UK34TipToeModeComponent::GetTipToeModeDuration()
{
	return 0.0f;
}

float UK34TipToeModeComponent::GetTipToeModeCooldownDuration() const
{
	return 0.0f;
}

float UK34TipToeModeComponent::GetRemainingTipToeModeDuration() const
{
	return 0.0f;
}

float UK34TipToeModeComponent::GetRemainingTipToeModeCooldownDuration() const
{
	return 0.0f;
}

ASlasherPlayer* UK34TipToeModeComponent::GetKiller() const
{
	return NULL;
}

bool UK34TipToeModeComponent::CanEnterTipToeMode() const
{
	return false;
}

void UK34TipToeModeComponent::Authority_SetIsInTipToeMode(const bool isInTipToeMode, const bool triggerExitEvent)
{

}

void UK34TipToeModeComponent::Authority_ReduceDuration(const float reductionPercentage)
{

}

void UK34TipToeModeComponent::Authority_ReduceCooldown(const float reductionPercentage) const
{

}

void UK34TipToeModeComponent::Authority_OnIntroCompleted()
{

}

void UK34TipToeModeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK34TipToeModeComponent, _isInTipToeMode);
	DOREPLIFETIME(UK34TipToeModeComponent, _isInTipToeModeCooldown);
	DOREPLIFETIME(UK34TipToeModeComponent, _tipToeModeCooldownTimer);
	DOREPLIFETIME(UK34TipToeModeComponent, _tipToeModeDurationTimer);
	DOREPLIFETIME(UK34TipToeModeComponent, _tipToeModeDurationWarningTimeUpTimer);
}

UK34TipToeModeComponent::UK34TipToeModeComponent()
{
	this->_tipToeModeStatusEffectClass = NULL;
	this->_tipToeModeCooldownTimer = NULL;
	this->_tipToeModeDurationTimer = NULL;
	this->_tipToeModeDurationWarningTimeUpTimer = NULL;
	this->_authority_distractionPoolComponent = NULL;
	this->_inputToDisplayWhileInTipToeMode = EInputInteractionType::VE_None;
	this->_inputToDisplayWhileInNormalMode = EInputInteractionType::VE_None;
	this->_distractionPoolSize = 25;
	this->_maxTryPerTickToFindSpawn = 5;
	this->_shouldMinimizeSpawnDistanceWhenInChase = true;
	this->_tipToeDistractionClass = NULL;
	this->_navQueryFilter = NULL;
	this->_authority_survivorsData = TMap<ACamperPlayer*, FCamperDistractionData>();
}
