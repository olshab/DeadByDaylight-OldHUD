#include "K32KillerToSurvivorTeleportInteractionDefinition.h"
#include "UObject/NoExportTypes.h"

class ACamperPlayer;
class AK32KillerPod;
class APallet;
class ADBDPlayer;

void UK32KillerToSurvivorTeleportInteractionDefinition::Server_SetTeleportTarget_Implementation(ACamperPlayer* survivor, AK32KillerPod* initiatedPod)
{

}

void UK32KillerToSurvivorTeleportInteractionDefinition::OnTeleportationComplete(ADBDPlayer* player)
{

}

void UK32KillerToSurvivorTeleportInteractionDefinition::OnLevelReadyToPlay()
{

}

void UK32KillerToSurvivorTeleportInteractionDefinition::OnKillerCollisionIngoreLingerComplete(ADBDPlayer* player)
{

}

void UK32KillerToSurvivorTeleportInteractionDefinition::Multicast_SetTeleportTarget_Implementation(ACamperPlayer* survivor, const FVector& teleportEndLocation, const FVector& teleportStartLocation, AK32KillerPod* initiatedPod)
{

}

void UK32KillerToSurvivorTeleportInteractionDefinition::Multicast_OnTeleportStarted_Implementation(ADBDPlayer* player, const FVector& teleportStartLocation, const FVector& teleportEndLocation)
{

}

void UK32KillerToSurvivorTeleportInteractionDefinition::Multicast_OnTeleportEnded_Implementation(ADBDPlayer* player)
{

}

void UK32KillerToSurvivorTeleportInteractionDefinition::Multicast_DestroyPallet_Implementation(APallet* pallet)
{

}

UK32KillerToSurvivorTeleportInteractionDefinition::UK32KillerToSurvivorTeleportInteractionDefinition()
{
	this->_overlockStatusEffect = NULL;
	this->_overheatStatusEffect = NULL;
	this->_killerSize = 100.000000;
	this->_secondsOfOverclockPerAssimilatedSurvivor = 1.000000;
}
