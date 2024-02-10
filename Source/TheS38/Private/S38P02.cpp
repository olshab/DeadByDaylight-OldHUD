#include "S38P02.h"

class UGameplayModifierContainer;

void US38P02::OnSurvivorScream()
{

}

void US38P02::Multicast_MakeSurvivorScream_Implementation(const int32 timesToScream)
{

}

float US38P02::GetScreamDuration() const
{
	return 0.0f;
}

float US38P02::GetMinRandomScreamDelay() const
{
	return 0.0f;
}

int32 US38P02::GetMaxScreamCount() const
{
	return 0;
}

float US38P02::GetMaxRandomScreamDelay() const
{
	return 0.0f;
}

float US38P02::GetExtraAuraDurationPerExtraScream() const
{
	return 0.0f;
}

float US38P02::GetCooldownDuration() const
{
	return 0.0f;
}

float US38P02::GetAuraDurationAtLevel() const
{
	return 0.0f;
}

void US38P02::EnableInteractions()
{

}

void US38P02::Authority_OnIsApplicableChanged(UGameplayModifierContainer* container, bool isApplicable)
{

}

US38P02::US38P02()
{
	this->_percentChanceOfDoubleScream = 0.330000;
	this->_perkStatusEffectClass = NULL;
	this->_perkStatusEffect = NULL;
	this->_auraStatusEffectClass = NULL;
	this->_auraDuration = 0.000000;
	this->_extraAuraDurationPerExtraScream = 2.000000;
	this->_screamDuration = 2.000000;
	this->_minRandomScreamDelay = 0.000000;
	this->_maxRandomScreamDelay = 1.000000;
	this->_maxScreamCount = 10;
	this->_cooldownDuration = 60.000000;
	this->_preventInteractionDuration = 0.250000;
}
