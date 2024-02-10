#include "BoonPerk.h"

class ACamperPlayer;

void UBoonPerk::Authority_OnSurvivorRemoved(ACamperPlayer* survivor)
{

}

UBoonPerk::UBoonPerk()
{
	this->_blessedStatusEffectClass = NULL;
	this->_blessedStatusEffect = NULL;
}
