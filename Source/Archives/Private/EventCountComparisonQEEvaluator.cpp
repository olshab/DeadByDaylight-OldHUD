#include "EventCountComparisonQEEvaluator.h"

UEventCountComparisonQEEvaluator::UEventCountComparisonQEEvaluator()
{
	this->_incrementCountEvents = TArray<FGameplayTag>();
	this->_incrementIfIAm = EEventSubject::Instigator;
	this->_resetCountEvents = TArray<FGameplayTag>();
	this->_resetIfIAm = EEventSubject::Instigator;
	this->_comparisonOperator = EEventCountComparisonOperator::EqualTo;
}
