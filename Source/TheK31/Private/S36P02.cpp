#include "S36P02.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"

float US36P02::GetBrokenStatusDurationAtLevel() const
{
	return 0.0f;
}

void US36P02::Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
{

}

void US36P02::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US36P02, _currentHookStage);
	DOREPLIFETIME(US36P02, _perkInteraction);
}

US36P02::US36P02()
{
	this->_brokenStatusEffectSeconds = 28.000000;
	this->_requiredHookStage = 2;
	this->_currentHookStage = 0;
	this->_perkInteractionClass = NULL;
	this->_perkInteraction = NULL;
	this->_brokenStatusEffect = NULL;
	this->_brokenEffectClass = NULL;
	this->_exhaustedEffectClass = NULL;
}
