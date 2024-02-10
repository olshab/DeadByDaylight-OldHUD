#include "HasStatusEffectFromPlayerEvaluatorCondition.h"

UHasStatusEffectFromPlayerEvaluatorCondition::UHasStatusEffectFromPlayerEvaluatorCondition()
{
	this->_statusEffectList = TArray<TSubclassOf<UStatusEffect>>();
}
