#include "IgnoreSkillCheckTypesEvaluatorCondition.h"

UIgnoreSkillCheckTypesEvaluatorCondition::UIgnoreSkillCheckTypesEvaluatorCondition()
{
	this->_ignoreAllButConsideredTypes = false;
	this->_consideredTypes = TSet<ESkillCheckCustomType>();
}
