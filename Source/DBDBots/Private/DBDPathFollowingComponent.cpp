#include "DBDPathFollowingComponent.h"

UDBDPathFollowingComponent::UDBDPathFollowingComponent()
{
	this->UnblockPathDeviationRadius = 200.000000;
	this->UnblockPathTimeLimit = 0.800000;
	this->UnblockPathReachDistance = 50.000000;
	this->_onNavLinkProxies = TSet<ANavLinkProxy*>();
}
