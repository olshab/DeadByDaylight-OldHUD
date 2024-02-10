#include "BTService_FindInteractor.h"

UBTService_FindInteractor::UBTService_FindInteractor()
{
	this->RegisterAsDiscoveredWhenFound = true;
	this->OnlyWithInteractorIDs = TArray<FString>();
	this->RejectIfTerrorIsCloserThanSelfMargin = -1.000000;
	this->RejectIfInTerrorRadius = 0.000000;
	this->RejectIfInPressureZone = false;
	this->UseLastKnownPositionForTerrorRejects = false;
	this->RejectIfWasInCooldownAndFocusedOnAnotherObject = true;
	this->RejectCooldownContextName = NAME_None;
	this->IgnoreMindFocusCooldown = false;
	this->RejectIfAnySiblingInteractorHasCooldown = false;
	this->AbandonIfInChase = false;
	this->RejectIfFocusedByOther = true;
	this->RejectIfInteractableFocusedByOther = false;
	this->RejectIfNotFocusedBySelf = true;
	this->IgnoreFocusFilterInEndgameCollapse = false;
	this->RejectIfNotInSight = false;
	this->IgnoreSightFilterIfDiscovered = false;
	this->IgnoreSightFilterIfInRange = false;
	this->RejectAboveRange = -1.000000;
	this->IgnoreRangeFilterIfDiscovered = false;
	this->IgnoreRangeFilterIfInSight = false;
	this->UsesActorLocation = false;
	this->InteractionSpeedStatusEffectID = NAME_None;
	this->IsUnsafeAction = false;
	this->UnsafeInteractionID = TEXT("");
	this->UnsafeActionUsesItemAddons = false;
	this->UnsafeActionIsSelfInteraction = false;
	this->UnsafeActionRange = 0.000000;
	this->_goalInteractor = NULL;
}
