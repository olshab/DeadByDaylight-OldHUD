#include "InvitationKillerComponent.h"
#include "Net/UnrealNetwork.h"

class UKillerNegateStunInteraction;

void UInvitationKillerComponent::OnRep_NegateStunInteraction(UKillerNegateStunInteraction* prevNegateStunInteraction)
{

}

void UInvitationKillerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInvitationKillerComponent, _negateStunInteraction);
}

UInvitationKillerComponent::UInvitationKillerComponent()
{
	this->_bloodlustExposeClass = NULL;
	this->_remoteDestroyClass = NULL;
	this->_negateStunClass = NULL;
	this->_bloodlustExposeInteraction = NULL;
	this->_remoteDestroyInteraction = NULL;
	this->_negateStunInteraction = NULL;
}
