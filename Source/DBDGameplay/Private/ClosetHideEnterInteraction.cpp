#include "ClosetHideEnterInteraction.h"

class ACamperPlayer;
class ALocker;

void UClosetHideEnterInteraction::EjectSurvivorFromLocker(ACamperPlayer* survivor, ALocker* locker)
{

}

UClosetHideEnterInteraction::UClosetHideEnterInteraction()
{
	this->_closetBlindnessStatusEffectClass = NULL;
	this->_ejectionFromLockerDelaySeconds = 1.000000;
}
