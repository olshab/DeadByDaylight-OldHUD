#include "K27P02.h"

class AGenerator;

void UK27P02::Multicast_ShowBubbleNotification_Implementation(AGenerator* triggeringGenerator)
{

}

void UK27P02::Multicast_AddGeneratorAura_Implementation(AGenerator* generator)
{

}

float UK27P02::GetRegressionModifierAtLevel() const
{
	return 0.0f;
}

float UK27P02::GetActivationTimeAtLevel() const
{
	return 0.0f;
}

UK27P02::UK27P02()
{
	this->_activePerkDuration = 0.000000;
	this->_regressionModifier = 0.000000;
	this->_authority_affectedGeneratorsAndActiveTimers = TMap<AGenerator*, FFastTimer>();
	this->_gameplayModifierHandles = TMap<AGenerator*, uint64>();
}
