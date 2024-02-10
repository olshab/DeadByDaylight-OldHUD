#include "K32KillerPodPool.h"
#include "Net/UnrealNetwork.h"

class AActor;
class ADBDPlayer;

void UK32KillerPodPool::OnLingeringLastControlledPodExpired()
{

}

void UK32KillerPodPool::OnLevelReadyToPlay()
{

}

void UK32KillerPodPool::OnKillerPodCreated(AActor* actor)
{

}

void UK32KillerPodPool::OnKillerPodAcquiredChanged(const bool isAcquired)
{

}

void UK32KillerPodPool::Authority_OnDestroyPodDelayTimerDone(ADBDPlayer* launchingSurvivor)
{

}

void UK32KillerPodPool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK32KillerPodPool, _controlledPod);
}

UK32KillerPodPool::UK32KillerPodPool()
{
	this->_controlledPod = NULL;
}
