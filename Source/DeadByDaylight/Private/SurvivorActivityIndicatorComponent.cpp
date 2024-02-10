#include "SurvivorActivityIndicatorComponent.h"
#include "SurvivorActivity.h"
#include "GameplayTagContainer.h"
#include "ECamperDamageState.h"
#include "GameEventData.h"

class UChargeableComponent;
class ADBDPlayer;

void USurvivorActivityIndicatorComponent::OnPlayerPickedUp(ADBDPlayer* picker)
{

}

void USurvivorActivityIndicatorComponent::OnPlayerDropped()
{

}

void USurvivorActivityIndicatorComponent::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

void USurvivorActivityIndicatorComponent::OnChargeableProgressChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete)
{

}

void USurvivorActivityIndicatorComponent::Multicast_OnCamperEscape_Implementation()
{

}

void USurvivorActivityIndicatorComponent::HandleStartActivityIfStillInEffect(const FSurvivorActivity activityViewInfo)
{

}

void USurvivorActivityIndicatorComponent::Authority_OnCamperEscape(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

USurvivorActivityIndicatorComponent::USurvivorActivityIndicatorComponent()
{
	this->_activitiesDataAsset = NULL;
	this->_durationNeededToEnableUI = 0.500000;
}
