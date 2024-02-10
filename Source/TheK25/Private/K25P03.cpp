#include "K25P03.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class ACamperPlayer;

void UK25P03::OnSurvivorRemoved(ACamperPlayer* survivor)
{

}

void UK25P03::OnDamageStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UK25P03::OnCamperUnhookedFromScourgeHook(const FGameEventData& gameEventData)
{

}

float UK25P03::GetActionSpeedDebuffPercentageAtLevel() const
{
	return 0.0f;
}

UK25P03::UK25P03()
{
	this->_hemorrhageEffect = NULL;
	this->_mangledEffect = NULL;
	this->_K25P03SurvivorStateTwoEffect = NULL;
	this->_numberOfSurvivorsWaitingForDamageStateChange = 0;
	this->_state2ActionSpeedDebuffPercentage = 0.000000;
}
