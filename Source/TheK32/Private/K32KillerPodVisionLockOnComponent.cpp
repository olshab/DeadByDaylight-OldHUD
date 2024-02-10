#include "K32KillerPodVisionLockOnComponent.h"

class ACamperPlayer;
class AK32KillerPod;

void UK32KillerPodVisionLockOnComponent::Server_SetSurvivorBeingLockedOn_Implementation(ACamperPlayer* targetSurvivor)
{

}

void UK32KillerPodVisionLockOnComponent::Server_LaunchAssimilationProjectile_Implementation(ACamperPlayer* targetSurvivor, AK32KillerPod* currentPod)
{

}

void UK32KillerPodVisionLockOnComponent::Multicast_ShootPodProjectileAtSurvivor_Implementation(const AK32KillerPod* originKillerPod, ACamperPlayer* targetSurvivor)
{

}

UK32KillerPodVisionLockOnComponent::UK32KillerPodVisionLockOnComponent()
{
	this->_lineOfSightTraceSphereSize = 10.000000;
	this->_survivorProjectileTargetSocketName = TEXT("joint_Pelvis_01");
	this->_traceProfile = TEXT("Projectile");
	this->_feetOffsetMultiplier = 1.500000;
	this->_power = NULL;
}
