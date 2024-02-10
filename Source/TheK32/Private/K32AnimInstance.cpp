#include "K32AnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK32AnimInstance::ResetIsShootingPod()
{

}

void UK32AnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK32AnimInstance::UK32AnimInstance()
{
	this->_isAimingPodPlacement = false;
	this->_isShootingPod = false;
	this->_isInOverclockMode = false;
	this->_isTeleporting = false;
	this->_isControllingPod = false;
	this->_isTeleportingFromKillerPovWithInAntiCamp = false;
	this->_chargeKillerProjectileSpawnPercent = 0.000000;
	this->_overclockStatusEffectClass = NULL;
}
