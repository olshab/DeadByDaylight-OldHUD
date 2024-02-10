#include "BTService_FindInteractor_Camper.h"

UBTService_FindInteractor_Camper::UBTService_FindInteractor_Camper()
{
	this->StatusFilter = EFindInteractableCamperFilter::Crawling;
	this->IgnoreWhenTargetStatusEffects = TArray<TSubclassOf<UStatusEffect>>();
	this->RequiredAttentionMovementFrequency = 2.000000;
	this->AttentionMovementFrequencyLerp = 0.500000;
	this->AttentionValidTime = 5.000000;
	this->AttentionValidDistance = 500.000000;
	this->AttentionCooldownReduction = 20.000000;
}
