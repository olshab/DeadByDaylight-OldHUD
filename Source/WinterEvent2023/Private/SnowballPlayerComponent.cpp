#include "SnowballPlayerComponent.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"

void USnowballPlayerComponent::OnRep_SnowballThrowInteraction()
{

}

void USnowballPlayerComponent::OnRep_SnowballLauncherController()
{

}

void USnowballPlayerComponent::OnRep_CooldownTimer()
{

}

void USnowballPlayerComponent::OnOwningCamperGuidedStateChanged()
{

}

void USnowballPlayerComponent::OnCamperDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
{

}

void USnowballPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USnowballPlayerComponent, _cooldownTimer);
	DOREPLIFETIME(USnowballPlayerComponent, _snowballLauncherController);
	DOREPLIFETIME(USnowballPlayerComponent, _snowballThrowInteraction);
}

USnowballPlayerComponent::USnowballPlayerComponent()
{
	this->_cooldownTimer = NULL;
	this->_snowballLauncherControllerClass = NULL;
	this->_snowballThrowingInteractionClassSurvivor = NULL;
	this->_snowballThrowingInteractionClassKiller = NULL;
	this->_snowballLauncherController = NULL;
	this->_snowballThrowInteraction = NULL;
}
