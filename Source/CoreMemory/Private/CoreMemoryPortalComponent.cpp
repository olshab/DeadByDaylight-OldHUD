#include "CoreMemoryPortalComponent.h"

class ADBDPlayer;

TArray<ADBDPlayer*> UCoreMemoryPortalComponent::GetPlayersWithActivePortal() const
{
	return TArray<ADBDPlayer*>();
}

UCoreMemoryPortalComponent::UCoreMemoryPortalComponent()
{
	this->_playersWithActivePortal = TArray<ADBDPlayer*>();
}
