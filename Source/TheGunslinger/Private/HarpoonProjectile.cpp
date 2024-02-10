#include "HarpoonProjectile.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "HarpoonProjectileMovementComponent.h"

void AHarpoonProjectile::OnHarpoonStop(const FHitResult& result)
{

}

AHarpoonProjectile::AHarpoonProjectile()
{
	this->_movement = CreateDefaultSubobject<UHarpoonProjectileMovementComponent>(TEXT("Movement_FIXED"));
	this->_environmentCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Environment Collider"));
	this->_targetCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Target Detector"));
	this->_skeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponent"));
	this->_poolableActorComponent = NULL;
}
