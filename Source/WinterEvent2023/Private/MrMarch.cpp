#include "MrMarch.h"
#include "EMrMarchState.h"
#include "DBDNavModifierComponent.h"
#include "Components/SphereComponent.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "UObject/NoExportTypes.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

void AMrMarch::OnRep_MrMarchState(EMrMarchState previousState)
{

}

void AMrMarch::Multicast_StartMrMarchDestruction_Implementation()
{

}

void AMrMarch::Multicast_OnPlayerJumpscared_Implementation(ADBDPlayer* player, const FVector& jumpscareLocation)
{

}

void AMrMarch::DBD_MrMarchSpawn()
{

}

void AMrMarch::DBD_MrMarchDestroy()
{

}

void AMrMarch::Authority_OnJumpscareTriggerZoneExited(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void AMrMarch::Authority_OnJumpscareTriggerZoneEntered(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void AMrMarch::Authority_OnJumpscareFinished()
{

}

void AMrMarch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMrMarch, _mrMarchState);
}

AMrMarch::AMrMarch()
{
	this->_mrMarchSkeletalMesh = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("MrMarchSkeletalMesh"));
	this->_mrMarchCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MrMarchCollision"));
	this->_jumpscareTriggerZone = CreateDefaultSubobject<USphereComponent>(TEXT("JumpscareTriggerZone"));
	this->_dbdNavModifierComponent = CreateDefaultSubobject<UDBDNavModifierComponent>(TEXT("DBDNavModifierComponent"));
	this->_mrMarchJumpscareTimerRate = 0.160000;
	this->_mrMarchState = EMrMarchState::Spawned;
	this->_authority_playersInRange = TArray<ADBDPlayer*>();
}
