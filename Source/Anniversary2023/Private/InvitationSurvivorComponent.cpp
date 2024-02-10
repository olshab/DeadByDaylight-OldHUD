#include "InvitationSurvivorComponent.h"
#include "Net/UnrealNetwork.h"

void UInvitationSurvivorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInvitationSurvivorComponent, _reverseBamboozle);
	DOREPLIFETIME(UInvitationSurvivorComponent, _fragilePallet);
}

UInvitationSurvivorComponent::UInvitationSurvivorComponent()
{
	this->_reverseBamboozleInteraction = NULL;
	this->_fragilePalletInteraction = NULL;
	this->_reverseBamboozle = NULL;
	this->_fragilePallet = NULL;
}
