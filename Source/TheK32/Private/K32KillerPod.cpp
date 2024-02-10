#include "K32KillerPod.h"
#include "K32KillerPodSettings.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "K32PodDangerPredictionComponent.h"
#include "MapActorComponent.h"

class ASlasherPlayer;
class ADBDPlayer;

void AK32KillerPod::OnRep_Settings(FK32KillerPodSettings previousSettings)
{

}

void AK32KillerPod::OnRep_IsAcquiredFromPool()
{

}

void AK32KillerPod::OnLevelReadyToPlay()
{

}

void AK32KillerPod::OnKillerSet(ASlasherPlayer* killer)
{

}

void AK32KillerPod::OnKillerLocallyObservedChanged(const bool isKillerLocallyObserved)
{

}

void AK32KillerPod::Multicast_OnPodDisabled_Implementation()
{

}

void AK32KillerPod::Multicast_OnDestroyedByRecycle_Implementation()
{

}

void AK32KillerPod::Multicast_OnDestroyedByManualRemoval_Implementation()
{

}

void AK32KillerPod::Multicast_OnDestroyedByEmp_Implementation(ADBDPlayer* destroyingSurvivor)
{

}

FK32KillerPodSettings AK32KillerPod::GetSettings() const
{
	return FK32KillerPodSettings{};
}

void AK32KillerPod::Authority_OnDisabledTimerDone()
{

}

void AK32KillerPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK32KillerPod, _settings);
	DOREPLIFETIME(AK32KillerPod, _isAcquiredFromPool);
}

AK32KillerPod::AK32KillerPod()
{
	this->_overlapTestingMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OverlapTestingMeshComponent"));
	this->_mapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("K32MapActorComponent"));
	this->_isAcquiredFromPool = false;
	this->_dangerPredictionComponent = CreateDefaultSubobject<UK32PodDangerPredictionComponent>(TEXT("K32PodDangerPredictionComponent"));
	this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("K32PodAIPerceptionStimuliSourceComponent"));
}
