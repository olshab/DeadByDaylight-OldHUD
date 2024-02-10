#include "K33ExitTunnelInteraction.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UK33ExitTunnelInteraction::Multicast_OnSnapTransitionCompleted_Implementation(ADBDPlayer* player, const FVector& location, const FRotator& rotation)
{

}

void UK33ExitTunnelInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33ExitTunnelInteraction, _useExitTimePenalty);
}

UK33ExitTunnelInteraction::UK33ExitTunnelInteraction()
{
	this->_killerInstinctStatusEffectClass = NULL;
	this->_exitTunnelAnimationTime = 1.000000;
	this->_toggleMeshVisibilityAnimationPercentageTime = 0.800000;
	this->_cameraRotationSpeed = 5.000000;
	this->_fadeOutDuration = 0.250000;
	this->_useExitTimePenalty = false;
}
