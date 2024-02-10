#include "K32PodDangerPredictionComponent.h"

UK32PodDangerPredictionComponent::UK32PodDangerPredictionComponent()
{
	this->_podMaxRange = 2000.000000;
	this->_podRangeMargin = 150.000000;
	this->_dangerAreaCostMultiplierForIdlePod = 50.000000;
	this->_dangerAreaCostMultiplierForActivePod = 1000000.000000;
	this->_activePodWeightPenalty = -35.000000;
	this->_idlePodWeightPenalty = -5.000000;
	this->_pod = NULL;
	this->_allInGamePlayers = TArray<AActor*>();
}
