#include "K31RadarAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK31RadarAnimInstance::ResetIsRecallingADrone()
{

}

void UK31RadarAnimInstance::ResetIsActivatingADrone()
{

}

void UK31RadarAnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK31RadarAnimInstance::UK31RadarAnimInstance()
{
	this->_isRecallingADrone = false;
	this->_isActivatingADrone = false;
	this->_isAbleToPlaceDrone = false;
	this->_isPowerOnCooldown = false;
	this->_owningK31Power = NULL;
	this->_killer = NULL;
}
