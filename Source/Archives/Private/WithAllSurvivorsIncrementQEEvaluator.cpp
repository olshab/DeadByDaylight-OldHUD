#include "WithAllSurvivorsIncrementQEEvaluator.h"

UWithAllSurvivorsIncrementQEEvaluator::UWithAllSurvivorsIncrementQEEvaluator()
{
	this->_targetList = TSet<TWeakObjectPtr<ACamperPlayer>>();
}
