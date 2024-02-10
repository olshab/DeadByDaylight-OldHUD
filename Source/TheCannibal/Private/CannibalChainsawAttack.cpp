#include "CannibalChainsawAttack.h"

UCannibalChainsawAttack::UCannibalChainsawAttack()
{
	this->_immuneToSuccessiveChainsawHitsDuration = 0.500000;
	this->_lastChainsawHitTimes = TMap<ADBDPlayer*, float>();
}
