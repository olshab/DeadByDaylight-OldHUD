#include "SpawnedPalletTracker.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

void ASpawnedPalletTracker::OnRep_TrackedPallet()
{

}

void ASpawnedPalletTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASpawnedPalletTracker, _indicatorLocation);
	DOREPLIFETIME(ASpawnedPalletTracker, _trackedPallet);
}

ASpawnedPalletTracker::ASpawnedPalletTracker()
{
	this->_indicatorLocation = CreateDefaultSubobject<USceneComponent>(TEXT("IndicatorLocation"));
	this->_trackedPallet = NULL;
}
