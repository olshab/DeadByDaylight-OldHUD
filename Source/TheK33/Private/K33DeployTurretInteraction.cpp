#include "K33DeployTurretInteraction.h"
#include "Net/UnrealNetwork.h"

void UK33DeployTurretInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33DeployTurretInteraction, _dropOffLocation);
}

UK33DeployTurretInteraction::UK33DeployTurretInteraction()
{
	this->_cancelDeployDuration = 0.250000;
}
