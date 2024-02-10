#include "BTDecorator_IsInteractionAvailable.h"

UBTDecorator_IsInteractionAvailable::UBTDecorator_IsInteractionAvailable()
{
	this->InteractionCheckType = EInteractionCheckType::InteractionID;
	this->InputType = EInputInteractionType::VE_None;
	this->InteractionIds = TArray<FString>();
	this->OnFilter = EIsInteractionAvailableOnFilter::Self;
	this->FailIfAnotherOngoingInteraction = true;
	this->FailIfNotPerformingInteraction = false;
}
