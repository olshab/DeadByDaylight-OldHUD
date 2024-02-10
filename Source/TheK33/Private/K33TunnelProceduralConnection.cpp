#include "K33TunnelProceduralConnection.h"
#include "K33SelectedControlStationLinkedActorOutlineUpdateStrategy.h"
#include "Components/SplineComponent.h"
#include "Components/SceneComponent.h"
#include "DBDOutlineComponent.h"

AK33TunnelProceduralConnection::AK33TunnelProceduralConnection()
{
	this->_splineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	this->_splineMeshContainer = CreateDefaultSubobject<USceneComponent>(TEXT("SplineMeshesContainer"));
	this->_outlineStrategy = CreateDefaultSubobject<UK33SelectedControlStationLinkedActorOutlineUpdateStrategy>(TEXT("OutlineStrategyComponent"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_staticMeshComponent = NULL;
	this->_staticMeshMaterial = NULL;
	this->_splineMeshAxis = ESplineMeshAxis::Z;
	this->_splineMeshComponent = NULL;
	this->_splineMeshes = TArray<USplineMeshComponent*>();
}
