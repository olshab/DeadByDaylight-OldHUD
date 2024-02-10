#include "AnyMeansNecessary.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UAnyMeansNecessary::Authority_OnPalletPulledUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) const
{

}

UAnyMeansNecessary::UAnyMeansNecessary()
{
	this->_actionSpeedBonus = 0.000000;
	this->_anyMeansNecessaryActionSpeedEffect = NULL;
}
