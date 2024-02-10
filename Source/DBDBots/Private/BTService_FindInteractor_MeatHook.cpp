#include "BTService_FindInteractor_MeatHook.h"

UBTService_FindInteractor_MeatHook::UBTService_FindInteractor_MeatHook()
{
	this->StatusFilter = EFindInteractableMeatHookStatus::HookedSurvivor;
	this->KillerTargetUpdateInterval = 0.500000;
	this->UnsafeSabotageHealthyMarginTime = 0.000000;
	this->UnsafeSabotageInjuredMarginTime = 1.500000;
	this->NoToolboxInteractionID = TEXT("");
}
