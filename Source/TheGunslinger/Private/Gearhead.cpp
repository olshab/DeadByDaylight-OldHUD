#include "Gearhead.h"
#include "ECamperDamageState.h"

class ACamperPlayer;

void UGearhead::Authority_OnCamperRemoved(ACamperPlayer* removedPlayer)
{

}

void UGearhead::Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
{

}

UGearhead::UGearhead()
{
	this->_timedRevealToKillerEffect = NULL;
	this->_surviorAuraDurations = 0.000000;
	this->_perkDuration = 30.000000;
	this->_skillCheckType = ESkillCheckType::NONE;
	this->_basicAttack = true;
}
