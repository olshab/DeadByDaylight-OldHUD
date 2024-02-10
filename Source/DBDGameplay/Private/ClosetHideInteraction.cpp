#include "ClosetHideInteraction.h"

class ADBDPlayer;
class UInteractor;
class AActor;

void UClosetHideInteraction::SetPlayerInCloset(ADBDPlayer* player)
{

}

void UClosetHideInteraction::SetOtherInteractorsUsable(const bool isEnabled)
{

}

void UClosetHideInteraction::SetCollisionWithCloset(const bool isEnabled, ADBDPlayer* player) const
{

}

bool UClosetHideInteraction::IsRushed() const
{
	return false;
}

bool UClosetHideInteraction::IsOccupied() const
{
	return false;
}

bool UClosetHideInteraction::IsInteractingPlayerInsideCloset(const ADBDPlayer* player) const
{
	return false;
}

ADBDPlayer* UClosetHideInteraction::GetPlayerInCloset() const
{
	return NULL;
}

UInteractor* UClosetHideInteraction::GetInsideInteractor() const
{
	return NULL;
}

void UClosetHideInteraction::FireSoundEventFromInteractor(AActor* instigator, ADBDPlayer* instigatingPlayer)
{

}

UClosetHideInteraction::UClosetHideInteraction()
{
	this->_rushed = false;
}
