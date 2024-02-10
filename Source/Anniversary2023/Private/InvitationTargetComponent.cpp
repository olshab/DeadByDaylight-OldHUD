#include "InvitationTargetComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UInvitationTargetComponent::OnRep_TargetGameObject(AActor* previousTarget)
{

}

void UInvitationTargetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInvitationTargetComponent, _targetGameObject);
}

UInvitationTargetComponent::UInvitationTargetComponent()
{
	this->_interactionAngleInDegrees = 0.000000;
	this->_targetGameObject = NULL;
}
