#include "Visionary.h"

float UVisionary::GetRangeAtLevel() const
{
	return 0.0f;
}

float UVisionary::GetCooldownAtLevel() const
{
	return 0.0f;
}

void UVisionary::Authority_OnIntroComplete()
{

}

UVisionary::UVisionary()
{
	this->_auraVisibilityRange = 0.000000;
	this->_cooldownDuration = 0.000000;
}
