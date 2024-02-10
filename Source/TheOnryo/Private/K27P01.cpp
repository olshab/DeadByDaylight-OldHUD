#include "K27P01.h"
#include "GameEventData.h"

float UK27P01::GetAuraRevealDuration() const
{
	return 0.0f;
}

void UK27P01::Authority_OnSurvivorUnhookedOffScourgeHook(const FGameEventData& gameEventData)
{

}

UK27P01::UK27P01()
{
	this->_survivorAuraRevealDuration = 0.000000;
	this->_timedRevealToKillerEffectClass = NULL;
}
