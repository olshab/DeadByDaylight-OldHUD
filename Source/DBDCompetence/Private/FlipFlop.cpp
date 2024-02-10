#include "FlipFlop.h"

class ADBDPlayer;

float UFlipFlop::GetRecoveryProgressionAtLevel() const
{
	return 0.0f;
}

float UFlipFlop::GetMaxWiggleProgressionAtLevel() const
{
	return 0.0f;
}

void UFlipFlop::Authority_OnPickedUp(ADBDPlayer* picker)
{

}

UFlipFlop::UFlipFlop()
{
	this->_recoveryProgressionConversionRatio = 0.000000;
	this->_maxWiggleProgression = 0.000000;
}
