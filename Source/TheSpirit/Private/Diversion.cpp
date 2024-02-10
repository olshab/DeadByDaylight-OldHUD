#include "Diversion.h"
#include "ECamperDamageState.h"

void UDiversion::Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

UDiversion::UDiversion()
{
	this->_diversionActivationTimePerLevel = 0.000000;
	this->_throwPebbleDistance = 20.000000;
	this->_throwPebbleInteraction = NULL;
	this->_interactionAttacherComponent = NULL;
}
