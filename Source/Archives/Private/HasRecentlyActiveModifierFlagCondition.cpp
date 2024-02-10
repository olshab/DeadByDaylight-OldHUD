#include "HasRecentlyActiveModifierFlagCondition.h"

UHasRecentlyActiveModifierFlagCondition::UHasRecentlyActiveModifierFlagCondition()
{
	this->_type = ERecentlyActiveModifierType::AnyTrue;
	this->_timerStartType = ERecentlyActiveModifierTimerStartType::OnTagAdded;
	this->_modifierTags = TArray<FGameplayTag>();
}
