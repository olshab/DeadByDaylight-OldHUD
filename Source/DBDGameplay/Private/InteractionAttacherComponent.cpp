#include "InteractionAttacherComponent.h"
#include "Net/UnrealNetwork.h"

void UInteractionAttacherComponent::OnRep_InteractionDefinitions()
{

}

void UInteractionAttacherComponent::OnRep_ChargeableComponents()
{

}

void UInteractionAttacherComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInteractionAttacherComponent, _interactionDefinitions);
	DOREPLIFETIME(UInteractionAttacherComponent, _chargeableComponents);
	DOREPLIFETIME(UInteractionAttacherComponent, _restriction);
	DOREPLIFETIME(UInteractionAttacherComponent, _secondsToCharge);
	DOREPLIFETIME(UInteractionAttacherComponent, _clientWaitForOwnerInitialization);
}

UInteractionAttacherComponent::UInteractionAttacherComponent()
{
	this->_interactionDefinitions = TArray<UInteractionDefinition*>();
	this->_chargeableComponents = TArray<UChargeableComponent*>();
	this->_interactionDefinition = NULL;
	this->_restriction = EInteractionOwnerType::SurvivorsSelfInteractor;
	this->_useChargeableInteraction = false;
	this->_chargeableComponentID = NAME_None;
	this->_chargeableComponentName = NAME_None;
	this->_clientWaitForOwnerInitialization = false;
}
