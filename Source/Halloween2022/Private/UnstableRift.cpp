#include "UnstableRift.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "Interactor.h"
#include "UnstableRiftInteraction.h"
#include "Components/BoxComponent.h"
#include "ChargeableComponent.h"
#include "UnstableRiftOutlineStrategy.h"
#include "NearTrackedActorComponent.h"
#include "UnstableRiftTeleportationComponent.h"
#include "SpawnElementTrackerComponent.h"

class AActor;

void AUnstableRift::OnRep_IsInteractionAvailable()
{

}

void AUnstableRift::OnIntroCompleted()
{

}

void AUnstableRift::OnInRangeChanged(bool isWithinRange, const AActor* trackedActor)
{

}

void AUnstableRift::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AUnstableRift, _isInteractionAvailable);
	DOREPLIFETIME(AUnstableRift, _isPortalOpened);
}

AUnstableRift::AUnstableRift()
{
	this->_isInitialized = false;
	this->_isInteractionAvailable = true;
	this->_isPortalOpened = false;
	this->_unstableRiftInteractionSurvivor = CreateDefaultSubobject<UUnstableRiftInteraction>(TEXT("UnstableRiftInteractionSurvivor"));
	this->_unstableRiftInteractionKiller = CreateDefaultSubobject<UUnstableRiftInteraction>(TEXT("UnstableRiftInteractionKiller"));
	this->_unstableRiftInteractionChargeableSurvivor = CreateDefaultSubobject<UChargeableComponent>(TEXT("UnstableRiftInteractionChargeableSurvivor"));
	this->_unstableRiftInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("UnstableRiftInteractionChargeableKiller"));
	this->_unstableRiftInteractor = CreateDefaultSubobject<UInteractor>(TEXT("UnstableRiftInteractor"));
	this->_unstableRiftInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("UnstableRiftInteractionZone"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_teleporterOutlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("TeleporterOutlineComponent"));
	this->_outlineStrategy = CreateDefaultSubobject<UUnstableRiftOutlineStrategy>(TEXT("OutlineStrategy"));
	this->_teleporterOutlineStrategy = CreateDefaultSubobject<UUnstableRiftOutlineStrategy>(TEXT("TeleporterOutlineStrategy"));
	this->_unstableRiftMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnstableRiftMesh"));
	this->_teleporterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleporterMesh"));
	this->_unstableRiftTeleportationComponent = CreateDefaultSubobject<UUnstableRiftTeleportationComponent>(TEXT("UnstableRiftTeleportationComponent"));
	this->_nearTrackedActorAudioComponent = CreateDefaultSubobject<UNearTrackedActorComponent>(TEXT("NearTrackedActorAudioComponent"));
	this->_offeringAudioEvent = NULL;
	this->_nearTrackedActorItemPreventionComponent = CreateDefaultSubobject<UNearTrackedActorComponent>(TEXT("NearTrackedActorItemPreventionComponent"));
	this->_rangeToPreventItemDrop = 200.000000;
	this->_stateTagsToGivePlayersOnItemDropPreventionArea = TArray<FGameplayTag>();
	this->_spawnElementTrackerComponent = CreateDefaultSubobject<USpawnElementTrackerComponent>(TEXT("SpawnElementTrackerComponent"));
	this->_maxDistanceToFollowPlayer = 3200.000000;
}
