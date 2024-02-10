#include "InvitationPlayerComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class AActor;

void UInvitationPlayerComponent::OnRep_InvitationChargesInt()
{

}

void UInvitationPlayerComponent::OnRep_CooldownTimer()
{

}

void UInvitationPlayerComponent::OnLevelReadyToPlay()
{

}

void UInvitationPlayerComponent::Multicast_CosmeticOnInvitationInteractionActivate_Implementation(ADBDPlayer* player, AActor* target)
{

}

void UInvitationPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInvitationPlayerComponent, _isInEndGame);
	DOREPLIFETIME(UInvitationPlayerComponent, _invitationCharges);
	DOREPLIFETIME(UInvitationPlayerComponent, _invitationChargesInt);
	DOREPLIFETIME(UInvitationPlayerComponent, _cooldownTimer);
}

UInvitationPlayerComponent::UInvitationPlayerComponent()
{
	this->_isInEndGame = false;
	this->_invitationChargesInt = 0;
	this->_cooldownTimer = NULL;
}
