#include "PlayWithYourFood.h"

class ADBDPlayer;

float UPlayWithYourFood::GetMovementSpeedPercentBuffAtLevel() const
{
	return 0.0f;
}

float UPlayWithYourFood::GetChargeGainedCooldown() const
{
	return 0.0f;
}

void UPlayWithYourFood::Authority_OnChaseEnded(ADBDPlayer* player, float chaseTime)
{

}

UPlayWithYourFood::UPlayWithYourFood()
{
	this->_movementSpeedPercentBuff = 0.000000;
	this->_basicAndSpecialAttackTags = TArray<FGameplayTag>();
	this->_chargeGainedCooldown = 10.000000;
}
