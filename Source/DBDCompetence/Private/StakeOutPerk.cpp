#include "StakeOutPerk.h"

void UStakeOutPerk::Server_ConsumeToken_Implementation()
{

}

bool UStakeOutPerk::Server_ConsumeToken_Validate()
{
	return true;
}

void UStakeOutPerk::Local_BroadcastConsumeToken()
{

}

float UStakeOutPerk::GetTokenChargeTime() const
{
	return 0.0f;
}

float UStakeOutPerk::GetMaxTokensAtLevel() const
{
	return 0.0f;
}

UStakeOutPerk::UStakeOutPerk()
{
	this->_stakeOutStatusEffectClass = NULL;
	this->_stakeOutStatusEffect = NULL;
	this->_maxTokensByLevel = 0;
	this->_tokenChargeTime = 15.000000;
}
