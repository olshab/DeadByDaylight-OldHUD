#include "MonstrousShrine.h"
#include "GameEventData.h"

float UMonstrousShrine::GetFasterDrainPercentageAtLevel() const
{
	return 0.0f;
}

void UMonstrousShrine::Authority_OnSurvivorUnhookedOnScourgeHook(const FGameEventData& gameEventData)
{

}

void UMonstrousShrine::Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData)
{

}

UMonstrousShrine::UMonstrousShrine()
{
	this->_fasterDrainPercentage = 0.000000;
	this->_fasterDrainOnScourgeHookEffect = NULL;
}
