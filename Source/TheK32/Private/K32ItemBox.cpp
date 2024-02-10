#include "K32ItemBox.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "Interactor.h"
#include "ChargeableComponent.h"
#include "K32ItemBoxSpeedUpInteraction.h"

class AActor;
class ADBDPlayer;

void AK32ItemBox::OnRep_State()
{

}

void AK32ItemBox::OnRep_SpawnedItem()
{

}

void AK32ItemBox::OnRep_IsSurvivorInteracting()
{

}

void AK32ItemBox::OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion)
{

}

void AK32ItemBox::Multicast_SetIsChargeTimeExtended_Implementation(const bool isAddonExtendingFirstActivationTimer)
{

}

void AK32ItemBox::Authority_OnItemPickup(ADBDPlayer* player)
{

}

void AK32ItemBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK32ItemBox, _spawnedItem);
	DOREPLIFETIME(AK32ItemBox, _state);
	DOREPLIFETIME(AK32ItemBox, _isSurvivorInteracting);
}

AK32ItemBox::AK32ItemBox()
{
	this->_chargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("Chargeable"));
	this->_spawnedItem = NULL;
	this->_containingItemSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ItemSpawnPoint"));
	this->_itemDropPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ItemDropPoint"));
	this->_state = EK32ItemBoxState::Available;
	this->_itemBoxSpeedUpInteraction = CreateDefaultSubobject<UK32ItemBoxSpeedUpInteraction>(TEXT("ItemBoxSpeedUpInteraction"));
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("K32ItemBoxInteractor"));
	this->_interactionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("K32ItemBoxInteractionZone"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_skeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("K32ItemBoxSkeletalMesh"));
	this->_isSurvivorInteracting = false;
	this->_survivorInteracting = NULL;
}
