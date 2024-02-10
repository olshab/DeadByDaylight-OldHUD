#include "AnimationFollowerActor.h"
#include "AnimationMontageDescriptor.h"
#include "MontagePlayer.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "AnimationMontageSlave.h"

void AAnimationFollowerActor::OnMontageStopped(const FAnimationMontageDescriptor id)
{

}

void AAnimationFollowerActor::OnMontageStarted(const FAnimationMontageDescriptor id, const float rate)
{

}

void AAnimationFollowerActor::OnMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted)
{

}

void AAnimationFollowerActor::NativeOnMontageStopped(const FAnimationMontageDescriptor id)
{

}

void AAnimationFollowerActor::NativeOnMontageStarted(const FAnimationMontageDescriptor id, const float rate)
{

}

void AAnimationFollowerActor::NativeOnMontageEnded(const FAnimationMontageDescriptor montage, bool interrupted)
{

}

AAnimationFollowerActor::AAnimationFollowerActor()
{
	this->_skeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("SkeletalMesh"));
	this->_montageFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
	this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("AnimMontagePlayer"));
}
