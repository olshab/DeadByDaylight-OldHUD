#include "NearGameObjectEvaluatorCondition.h"

UNearGameObjectEvaluatorCondition::UNearGameObjectEvaluatorCondition()
{
	this->_conditionType = EQueryConditionType::AllTrue;
	this->_gameObjectsQueries = TArray<FGameObjectQuery>();
}
