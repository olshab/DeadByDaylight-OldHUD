#include "K31DroneHackableAvoidanceSensor.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void UK31DroneHackableAvoidanceSensor::Init(UPrimitiveComponent* killerPrimitive, UPrimitiveComponent* survivorPrimitive)
{

}

void UK31DroneHackableAvoidanceSensor::Authority_OnSurvivorCollisionEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void UK31DroneHackableAvoidanceSensor::Authority_OnSurvivorCollisionBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void UK31DroneHackableAvoidanceSensor::Authority_OnKillerCollisionEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void UK31DroneHackableAvoidanceSensor::Authority_OnKillerCollisionBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

UK31DroneHackableAvoidanceSensor::UK31DroneHackableAvoidanceSensor()
{
	this->_killerDetectionPrimitive = NULL;
	this->_survivorDetectionPrimitive = NULL;
	this->_overlappingSurvivors = TSet<ADBDPlayer*>();
	this->_overlappingKillerToVisibilityMap = TMap<ADBDPlayer*, bool>();
}
