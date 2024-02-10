#include "DBDDangerPredictionComponent.h"

UDBDDangerPredictionComponent::UDBDDangerPredictionComponent()
{
	this->ApplyAdditionalCostInDangerArea = false;
	this->SurvivorFleePathStrategy = ESurvivorFleePathStrategy::None;
	this->RelevantHorizontalDistance = 0.000000;
	this->RelevantVerticalDistance = 0.000000;
	this->RelevantRole = EPlayerRole::VE_None;
}
