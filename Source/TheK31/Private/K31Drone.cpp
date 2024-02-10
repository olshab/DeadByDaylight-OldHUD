#include "K31Drone.h"
#include "K31DroneDangerPredictionComponent.h"
#include "Components/SceneComponent.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "AuthoritativePoolableActorComponent.h"
#include "K31DroneLaserController.h"
#include "Components/ChildActorComponent.h"
#include "K31DroneHackableAvoidanceSensor.h"
#include "K31DroneMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "K31DroneFlightController.h"
#include "K31DroneOwnershipComponent.h"
#include "K31DroneStateController.h"
#include "K31DroneDebugComponent.h"
#include "K31DronePlacementRecaller.h"
#include "K31DroneZoneComponent.h"
#include "K31TrapProximitySensor.h"
#include "K31DroneHackableComponent.h"
#include "DBDNavModifierComponent.h"
#include "MapActorComponent.h"

void AK31Drone::OnAcquiredChanged(const bool acquired)
{

}

void AK31Drone::Native_OnLocallyObservedChanged()
{

}

AK31Drone::AK31Drone()
{
	this->_movingRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Moving Root"));
	this->_laserChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser Child Actor"));
	this->_laserController = CreateDefaultSubobject<UK31DroneLaserController>(TEXT("Laser Controller"));
	this->_droneMesh = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("DroneMesh"));
	this->_activeZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Active Zone Mesh"));
	this->_movementComponent = CreateDefaultSubobject<UK31DroneMovementComponent>(TEXT("Movement Component"));
	this->_flightController = CreateDefaultSubobject<UK31DroneFlightController>(TEXT("Flight Controller"));
	this->_poolableActorComponent = CreateDefaultSubobject<UAuthoritativePoolableActorComponent>(TEXT("Poolable Actor Component"));
	this->_ownershipComponent = CreateDefaultSubobject<UK31DroneOwnershipComponent>(TEXT("Ownership Component"));
	this->_stateController = CreateDefaultSubobject<UK31DroneStateController>(TEXT("State Controller"));
	this->_debugComponent = CreateDefaultSubobject<UK31DroneDebugComponent>(TEXT("Debug Component"));
	this->_droneZoneComponent = CreateDefaultSubobject<UK31DroneZoneComponent>(TEXT("Drone Zone Component"));
	this->_trapProximitySensor = CreateDefaultSubobject<UK31TrapProximitySensor>(TEXT("Trap Proximity Sensor"));
	this->_placementRecallerComponent = CreateDefaultSubobject<UK31DronePlacementRecaller>(TEXT("Placement Recaller"));
	this->_hackableComponent = CreateDefaultSubobject<UK31DroneHackableComponent>(TEXT("Hackable Component"));
	this->_avoidanceSensor = CreateDefaultSubobject<UK31DroneHackableAvoidanceSensor>(TEXT("Avoidance Sensor"));
	this->_deployInteraction = NULL;
	this->_navModifierComponent = CreateDefaultSubobject<UDBDNavModifierComponent>(TEXT("Nav Modifier Component"));
	this->_dangerPredictionComponent = CreateDefaultSubobject<UK31DroneDangerPredictionComponent>(TEXT("Danger Prediction Component"));
	this->_droneMapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("DroneMapActorComponent"));
	this->_lastOwner = NULL;
	this->_localPlayerTracker = NULL;
}
