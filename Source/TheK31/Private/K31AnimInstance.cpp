#include "K31AnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK31AnimInstance::ResetIsReceivingADronePassively()
{

}

void UK31AnimInstance::ResetIsRecallingADrone()
{

}

void UK31AnimInstance::ResetIsDeployingADrone()
{

}

void UK31AnimInstance::ResetIsActivatingADrone()
{

}

void UK31AnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

int32 UK31AnimInstance::GetCustomizationMappingID() const
{
	return 0;
}

TArray<FName> UK31AnimInstance::GetCustoAnimTags() const
{
	return TArray<FName>();
}

UK31AnimInstance::UK31AnimInstance()
{
	this->_isInspecting = false;
	this->_isDeployingADrone = false;
	this->_isReceivingADronePassively = false;
	this->_isRecallingADrone = false;
	this->_isActivatingADrone = false;
	this->_animationSelector = NULL;
}
