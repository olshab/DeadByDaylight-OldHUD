#include "TerritorialImperative.h"

class ADBDPlayer;

void UTerritorialImperative::Multicast_OnPerkTriggered_Implementation(ADBDPlayer* triggerer)
{

}

UTerritorialImperative::UTerritorialImperative()
{
	this->_revealSurvivorStatusEffect = NULL;
	this->_survivorRevealedTime = 0.000000;
	this->_killerMinimumDistance = 2400.000000;
	this->_perkCooldown = 45.000000;
}
