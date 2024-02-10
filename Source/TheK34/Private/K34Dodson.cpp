#include "K34Dodson.h"
#include "Components/SceneComponent.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "AnimationMontageSlave.h"

void AK34Dodson::OnLevelReadyToPlay()
{

}

AK34Dodson::AK34Dodson()
{
	this->_skeletalMesh = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("SkeletalMesh"));
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->_animationMontageSlave = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("Animation Montage Slave"));
}
