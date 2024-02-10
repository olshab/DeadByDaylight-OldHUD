#include "BloodPact.h"

void UBloodPact::Authority_OnInRangeChanged(const bool inRange)
{

}

UBloodPact::UBloodPact()
{
	this->_fullHealthStateOnly = false;
	this->_hasteEffectRange = 1600.000000;
	this->_hasteEffectMovementSpeedIncrease = 0.000000;
	this->_bloodPactRevealEffect_Obsession = NULL;
	this->_bloodPactRevealEffect_Owner = NULL;
	this->_bloodPactHasteEffect = NULL;
	this->_decreaseObsessionChanceEffect = NULL;
	this->_ownerStatusEffect = NULL;
	this->_obsessionStatusEffect = NULL;
	this->_ownerHasteStatusEffect = NULL;
	this->_otherPlayerHasteStatusEffect = NULL;
	this->_otherPlayer = NULL;
}
