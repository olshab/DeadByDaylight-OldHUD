#include "PlayersInZoneTracker.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void UPlayersInZoneTracker::OnRep_PlayersInRange()
{

}

void UPlayersInZoneTracker::Authority_OnEndPlayerOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void UPlayersInZoneTracker::Authority_OnBeginPlayerOverlap(UPrimitiveComponent* overlappedComponent, AActor* other, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void UPlayersInZoneTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPlayersInZoneTracker, _playersInRange);
}

UPlayersInZoneTracker::UPlayersInZoneTracker()
{
	this->_tagsPreventingEnteringRange = TArray<FGameplayTag>();
	this->_tagsToAddToPlayerInZone = TArray<FGameplayTag>();
	this->_playerTracker = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerTracker"));
	this->_playersInRange = TArray<TWeakObjectPtr<ADBDPlayer>>();
}
