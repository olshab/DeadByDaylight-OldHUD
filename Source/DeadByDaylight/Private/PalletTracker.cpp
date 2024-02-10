#include "PalletTracker.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

class APallet;
class ASlasherPlayer;

void APalletTracker::OnRep_DreamPallet(APallet* oldDreamPallet)
{

}

void APalletTracker::InitializeTunableValues(ASlasherPlayer* slasher)
{

}

bool APalletTracker::CanSpawnDreamPalletAtLocation() const
{
	return false;
}

void APalletTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APalletTracker, _procedurallySpawnedPallet);
	DOREPLIFETIME(APalletTracker, _dreamPallet);
	DOREPLIFETIME(APalletTracker, _blocked);
}

APalletTracker::APalletTracker()
{
	this->_procedurallySpawnedPallet = NULL;
	this->_dreamPallet = NULL;
	this->_indicatorLocation = CreateDefaultSubobject<USceneComponent>(TEXT("IndicatorLocation"));
	this->_blocked = false;
}
