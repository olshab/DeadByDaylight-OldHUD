#include "SpawningEffectOnGameEventPerk.h"

float USpawningEffectOnGameEventPerk::GetLifetimeOfStatusEffectAtLevel()
{
	return 0.0f;
}

float USpawningEffectOnGameEventPerk::GetCustomParameterOfStatusEffectAtLevel()
{
	return 0.0f;
}

USpawningEffectOnGameEventPerk::USpawningEffectOnGameEventPerk()
{
	this->_shouldStartActivationTimerOnGameEventWithLifetime = false;
	this->_shouldCheckIfOwnerIsInstigatorOrTarget = true;
	this->_subjectType = ESpawningEffectGameEventSubject::Instigator;
}
