#include "IncrementOnModifierAddedEvaluator.h"

UIncrementOnModifierAddedEvaluator::UIncrementOnModifierAddedEvaluator()
{
	this->_trackedModifierFlag = TArray<FGameplayTag>();
	this->_incrementOnFlagAddedOnKiller = false;
}
