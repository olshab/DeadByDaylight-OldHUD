#include "WormholeFatherDeadBody.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Interactor.h"
#include "BoxPlayerOverlapComponent.h"
#include "CollectFatherKeyCardInteraction.h"

void AWormholeFatherDeadBody::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWormholeFatherDeadBody, _wrmFatherEasterEggSpawnedKeyCard);
}

AWormholeFatherDeadBody::AWormholeFatherDeadBody()
{
	this->_wrmFatherDeadBodyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WrmFatherDeadBodyStaticMesh"));
	this->_wrmFatherKeyCardAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("WrmFatherKeyCardAttachment"));
	this->_wrmFatherEasterEggKeyCardStaticClass = NULL;
	this->_wrmFatherKeyCardInteractableZone = CreateDefaultSubobject<UBoxPlayerOverlapComponent>(TEXT("WormholeFatherKeyCardInterableZone"));
	this->_wrmKeyCardFirstCollectionInteractor = CreateDefaultSubobject<UInteractor>(TEXT("WormholeFatherKeyCardFirstCollectionInteractor"));
	this->_fatherKeyCardCollectionInteraction = CreateDefaultSubobject<UCollectFatherKeyCardInteraction>(TEXT("FatherKeyCardCollectionInteraction"));
	this->_wrmFatherEasterEggSpawnedKeyCard = NULL;
}
