#include "K33TunnelBlockCosmetic.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "Components/SceneComponent.h"

FVector AK33TunnelBlockCosmetic::GetExitTunnelLocation_Implementation() const
{
	return FVector{};
}

AK33TunnelBlockCosmetic::AK33TunnelBlockCosmetic()
{
	this->_hasTunnelExitTile = false;
	this->_splineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->_tunnelProceduralConnectionClass = NULL;
	this->_numberOfConnectionActors = 3;
	this->_initialConnectionOffsetFromCenter = 100.000000;
	this->_endConnectionOffsetFromCenter = 50.000000;
	this->_lengthBetweenSplinePoints = 50.000000;
	this->_rotationPerSplinePoint = 30.000000;
	this->_firstSplinePointOffsetValue = 50.000000;
	this->_secondSplinePointOffsetValue = 25.000000;
	this->_tunnelProceduralConnections = TArray<AK33TunnelProceduralConnection*>();
	this->_vfxPathLightsTransforms = TArray<TWeakObjectPtr<USceneComponent>>();
}
