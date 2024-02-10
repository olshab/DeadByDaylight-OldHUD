#include "K33ControlStationTunnelConnection.h"
#include "Components/StaticMeshComponent.h"

AK33ControlStationTunnelConnection::AK33ControlStationTunnelConnection()
{
	this->_tunnelConnectionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TunnelConnectionMesh"));
}
