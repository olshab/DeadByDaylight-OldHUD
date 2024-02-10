#include "RemoteDestroyInteraction.h"

class ADBDPlayer;
class AInteractable;

void URemoteDestroyInteraction::Multicast_RemoteDestroy_Implementation(ADBDPlayer* player, AInteractable* interactable)
{

}

void URemoteDestroyInteraction::ExplodeInteractable(ADBDPlayer* player, AInteractable* interactable) const
{

}

URemoteDestroyInteraction::URemoteDestroyInteraction()
{
	this->_interactable = NULL;
}
