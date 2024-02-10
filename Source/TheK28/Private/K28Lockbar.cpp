#include "K28Lockbar.h"
#include "MontagePlayer.h"
#include "Components/BoxComponent.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "Net/UnrealNetwork.h"
#include "AnimationMontageSlave.h"
#include "BaseActorAttackableComponent.h"

class ADBDPlayer;

void AK28Lockbar::OnRep_State()
{

}

void AK28Lockbar::OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker)
{

}

void AK28Lockbar::OnLocallyObservedChanged()
{

}

UMontagePlayer* AK28Lockbar::GetMontagePlayer() const
{
	return NULL;
}

void AK28Lockbar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK28Lockbar, _state);
	DOREPLIFETIME(AK28Lockbar, _isLocked);
}

AK28Lockbar::AK28Lockbar()
{
	this->_state = EK28LockbarState::Unlocked;
	this->_lockbarStaticMesh = NULL;
	this->_skeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("SM_Lockbar"));
	this->_staticLockMesh = NULL;
	this->_boxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("LockBoxComponent"));
	this->_lockAttackableComponent = CreateDefaultSubobject<UBaseActorAttackableComponent>(TEXT("AttackableComponent"));
	this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("MontagePlayer"));
	this->_animationMontageSlave = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
}
