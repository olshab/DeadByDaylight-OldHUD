#include "K33EnterTunnelInteraction.h"
#include "UObject/NoExportTypes.h"

class ADBDPlayer;

void UK33EnterTunnelInteraction::Multicast_TeleportPlayerToTunnel_Implementation(ADBDPlayer* player, const FVector& location, const FRotator& rotation)
{

}

UK33EnterTunnelInteraction::UK33EnterTunnelInteraction()
{
	this->_hideWorldElementsMontagePercentageTime = 0.250000;
	this->_fadeOutDuration = 0.250000;
}
