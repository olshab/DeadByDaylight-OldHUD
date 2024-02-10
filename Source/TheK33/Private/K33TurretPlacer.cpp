#include "K33TurretPlacer.h"
#include "Net/UnrealNetwork.h"

void UK33TurretPlacer::OnRep_ReplicatedIsPlacementValid()
{

}

void UK33TurretPlacer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33TurretPlacer, _replicatedIsPlacementValid);
	DOREPLIFETIME(UK33TurretPlacer, _replicatedPlacementLocation);
}

UK33TurretPlacer::UK33TurretPlacer()
{
	this->_turretVisualPlacementStaticMeshComponentClass = NULL;
	this->_replicatedIsPlacementValid = false;
	this->_turretStaticMesh = NULL;
	this->_otherTurretsDropOffLocations = TArray<FVector>();
	this->_turretMeshLerpSpeed = 100.000000;
}
