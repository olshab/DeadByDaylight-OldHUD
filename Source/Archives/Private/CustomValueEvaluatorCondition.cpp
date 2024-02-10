#include "CustomValueEvaluatorCondition.h"

UCustomValueEvaluatorCondition::UCustomValueEvaluatorCondition()
{
	this->_paramConditionKey = TEXT("");
	this->_comparator = ECustomValueComparator::Equal;
}
