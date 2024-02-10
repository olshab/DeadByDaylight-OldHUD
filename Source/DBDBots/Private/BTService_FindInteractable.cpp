#include "BTService_FindInteractable.h"

UBTService_FindInteractable::UBTService_FindInteractable()
{
	this->SearchInterval = 1.500000;
	this->SearchHeightAmplifierActivationHeight = 350.000000;
	this->SearchHeightAmplifier = 3.000000;
	this->FilterClass = NULL;
	this->RegisterAsDiscoveredWhenFound = true;
	this->RejectIfInPressureZone = false;
	this->RejectCooldownContextName = NAME_None;
	this->AbandonIfInChase = false;
	this->RejectIfFocusedByOther = true;
	this->RejectIfNotFocusedBySelf = true;
	this->IgnoreFocusFilterInEndgameCollapse = false;
	this->RejectIfNotInSight = false;
	this->IgnoreSightFilterIfDiscovered = false;
	this->IgnoreSightFilterIfInRange = false;
	this->RejectAboveRange = -1.000000;
	this->IgnoreRangeFilterIfDiscovered = false;
	this->IgnoreRangeFilterIfInSight = false;
	this->_goalInteractable = NULL;
	this->_aiOwner = NULL;
}
