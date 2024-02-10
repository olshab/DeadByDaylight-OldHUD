#include "RecentlyActiveStateTagEvaluatorCondition.h"

URecentlyActiveStateTagEvaluatorCondition::URecentlyActiveStateTagEvaluatorCondition()
{
	this->_type = ERecentlyActiveStateTagType::AnyTrue;
	this->_timerStartType = ERecentlyActiveStateTagTimerStartType::OnTagAdded;
	this->_stateTags = TArray<FGameplayTag>();
}
