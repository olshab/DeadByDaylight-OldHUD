#include "DeadHard.h"

float UDeadHard::GetExhaustedDuration() const
{
	return 0.0f;
}

float UDeadHard::GetDeadHardCooldownDuration() const
{
	return 0.0f;
}

UDeadHard::UDeadHard()
{
	this->_deadHardAnimInstance = NULL;
	this->_deadHardInteraction = NULL;
	this->_deadHardCooldownDuration = 1.000000;
	this->_effectsToSpawn = TArray<FStatusEffectSpawnData>();
	this->_exhaustedCooldownPerLevel = 0.000000;
	this->_interactionAttacherComponent = NULL;
}
