#include "K32KillerPodSpawningComponent.h"
#include "EK32KillerPodSpawningResult.h"
#include "K32KillerPodSpawningInputData.h"

void UK32KillerPodSpawningComponent::Server_FireKillerProjectile_Implementation(const FK32KillerPodSpawningInputData inputData, const EK32KillerPodSpawningResult expectedResult)
{

}

void UK32KillerPodSpawningComponent::OnIntroCompleted()
{

}

void UK32KillerPodSpawningComponent::Multicast_FireKillerProjectile_Implementation()
{

}

UK32KillerPodSpawningComponent::UK32KillerPodSpawningComponent()
{
	this->_worldDetectionTraceSphereSize = 30.000000;
	this->_survivorDetectionSphereSize = 15.000000;
	this->_lineOfSightTraceSphereSize = 5.000000;
	this->_podCollisionToFinalLocationTraceSphereSize = 5.000000;
	this->_secondaryHitCheckDistance = 20.000000;
	this->_secondaryHitCheckBackDistance = 5.000000;
	this->_secondaryHitPitchRotationDegrees = 40.000000;
	this->_secondaryHitYawRotationDegrees = 60.000000;
	this->_floorSearchingLength = 50.000000;
	this->_attachmentPointGridHorizontalAngle = 30.000000;
	this->_attachmentPointGridVerticalAngle = 30.000000;
	this->_attachmentPointGridLength = 50.000000;
	this->_revealSurvivorToKillerStatusEffectClass = NULL;
	this->_validationAllowedDistanceOffset = 100.000000;
	this->_indicatorPointToLocationFactor = 1.500000;
	this->_traceProfile = TEXT("Projectile");
	this->_forwardProjectileSpawnDistance = 75.000000;
}
