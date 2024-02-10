#include "K32ItemBoxIterativeWeightAdjustmentStrategy.h"

UK32ItemBoxIterativeWeightAdjustmentStrategy::UK32ItemBoxIterativeWeightAdjustmentStrategy()
{
	this->_selectedSpawners = TArray<TScriptInterface<IWeightedElement>>();
	this->_penaltyFromDistanceToClosestK32ItemBox = NULL;
}
