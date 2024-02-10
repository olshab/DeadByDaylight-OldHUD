#include "K30Addon17.h"

class ADBDPlayer;

void UK30Addon17::Multicast_OnMakeSurvivorScream_Implementation(ADBDPlayer* player, const float lifetime)
{

}

UK30Addon17::UK30Addon17()
{
	this->_revealAuraToKillerEffectClass = NULL;
	this->_distanceForScreams = 3600.000000;
	this->_dealyForScreams = 0.500000;
}
