#include "SnowballProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PoolableProjectileComponent.h"

class UPrimitiveComponent;
class AActor;

void ASnowballProjectile::OnPlayerDetectorHit(UPrimitiveComponent* primitiveComponent, const FHitResult& hitResult)
{

}

void ASnowballProjectile::OnCollisionComponentHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, FVector normalImpulse, const FHitResult& hitResult)
{

}

ASnowballProjectile::ASnowballProjectile()
{
	this->_staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	this->_worldCollision = CreateDefaultSubobject<USphereComponent>(TEXT("WorldCollision"));
	this->_playerDetector = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerDetector"));
	this->_poolableProjectileComponent = CreateDefaultSubobject<UPoolableProjectileComponent>(TEXT("PoolableProjectileComponent"));
	this->_cachedProjectilesInGame = TSet<ABaseProjectile*>();
	this->_poolDelayTime = 0.500000;
}
