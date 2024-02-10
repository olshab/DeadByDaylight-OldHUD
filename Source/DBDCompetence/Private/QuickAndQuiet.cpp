#include "QuickAndQuiet.h"

float UQuickAndQuiet::GetCooldownDurationSecondsAtLevel() const
{
	return 0.0f;
}

void UQuickAndQuiet::Authority_OnPlayerRushedActionFinished()
{

}

UQuickAndQuiet::UQuickAndQuiet()
{
	this->_silentRushedActionStatusEffect = NULL;
	this->_cooldownDurationSeconds = 30.000000;
}
