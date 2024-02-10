#include "HideInSnowmanInteraction.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UHideInSnowmanInteraction::Multicast_StopControllingSnowman_Implementation(ADBDPlayer* player)
{

}

void UHideInSnowmanInteraction::Multicast_StartControllingSnowman_Implementation(ADBDPlayer* player)
{

}

void UHideInSnowmanInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHideInSnowmanInteraction, _isSnowmanShieldDamaged);
}

UHideInSnowmanInteraction::UHideInSnowmanInteraction()
{
	this->_nonDamagingSnowmanDestroyingEvents = TArray<FGameplayTag>();
	this->_authority_attacker = NULL;
	this->_isSnowmanShieldDamaged = false;
}
