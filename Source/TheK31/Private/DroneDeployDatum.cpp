#include "DroneDeployDatum.h"

FDroneDeployDatum::FDroneDeployDatum()
{
	this->Location = FVector{};
	this->Rotation = FRotator{};
	this->DeployCount = 0;
	this->DeployingCharacter = NULL;
	this->HasReachedDeployLocation = false;
	this->IsDeployed = false;
}
