#include "BTService_FindInteractor_Pallet.h"

UBTService_FindInteractor_Pallet::UBTService_FindInteractor_Pallet()
{
	this->IntentionFilter = EFindInteractablePalletIntentions::Fall;
	this->RaisePalletPerkId = TEXT("AnyMeansNecessary");
	this->SkipSafetyCheck = false;
	this->ExtraHealthySurvivorActionTime = 1.500000;
	this->ExtraInjuredSurvivorActionTime = 1.500000;
	this->PalletInteractorLocationOffset = 80.000000;
	this->AcceptableEvadePointCrossingDestDist = 300.000000;
}
