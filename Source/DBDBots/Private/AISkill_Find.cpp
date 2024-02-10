#include "AISkill_Find.h"

UAISkill_Find::UAISkill_Find()
{
	this->FindClass = NULL;
	this->SearchInterval = 1.000000;
	this->MustBeSeen = false;
	this->RejectIfWasInCooldownAndFocusedOnAnotherObject = true;
	this->IgnoreMindFocusCooldown = false;
	this->AbandonIfInChase = true;
	this->RejectIfInPressureZone = true;
	this->RejectIfNotFocusedBySelf = true;
	this->RejectIfInteractableFocusedByOther = false;
	this->UsesActorLocation = false;
	this->SearchHeightAmplifier = 3.000000;
	this->SearchHeightAmplifierActivationHeight = 350.000000;
	this->IsUnsafeAction = false;
	this->UnsafeInteractionID = TEXT("");
	this->UnsafeActionUsesItemAddons = false;
	this->UnsafeActionIsSelfInteraction = false;
	this->UnsafeActionRange = 0.000000;
	this->_currentWishedObjects = TArray<UObject*>();
}
