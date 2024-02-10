#include "HarpoonChainPositioner.h"

class ADBDPlayer;

void UHarpoonChainPositioner::OnOwnerCollected(ADBDPlayer* collector)
{

}

void UHarpoonChainPositioner::AttachToRifle()
{

}

void UHarpoonChainPositioner::AttachToAnimSocket()
{

}

UHarpoonChainPositioner::UHarpoonChainPositioner()
{
	this->_harpoonPropClass = NULL;
	this->_survivorAttachSocket = NAME_None;
	this->_animationSocket = NAME_None;
	this->_harpoonMinimumSnapBackDistance = 50.000000;
	this->_harpoonProp = NULL;
	this->_harpoonProjectile = NULL;
	this->_collector = NULL;
	this->_chain = NULL;
}
