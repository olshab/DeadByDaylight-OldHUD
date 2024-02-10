#include "BlockFeedbackComponent.h"

void UBlockFeedbackComponent::OnLocallyObservedChanged()
{

}

UBlockFeedbackComponent::UBlockFeedbackComponent()
{
	this->_localPlayerTracker = NULL;
	this->_defaultBlockSelfFeedbacks = TArray<ABlockFeedbackBase*>();
	this->_defaultBlockOtherFeedbacks = TArray<ABlockFeedbackBase*>();
	this->_defaultBlockSelfFeedbackClasses = TArray<TSubclassOf<ABlockFeedbackBase>>();
	this->_defaultBlockOtherFeedbackClasses = TArray<TSubclassOf<ABlockFeedbackBase>>();
	this->_styleOverrides = TArray<FBlockFeedbackStyleOverride>();
}
