#include "OutlineUpdateStrategy.h"

UOutlineUpdateStrategy::UOutlineUpdateStrategy()
{
	this->_requiredPlayerStateTags = TArray<FGameplayTag>();
	this->_preventativePlayerStateTags = TArray<FGameplayTag>();
	this->_outlineComponent = NULL;
}
