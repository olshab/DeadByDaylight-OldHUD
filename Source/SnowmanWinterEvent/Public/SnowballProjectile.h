#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PhysicsBasedProjectile.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ImpactInfo.h"
#include "SnowballProjectile.generated.h"

class UStaticMeshComponent;
class UPoolableProjectileComponent;
class UPrimitiveComponent;
class USphereComponent;
class ABaseProjectile;
class AActor;
class ADBDPlayer;

UCLASS()
class SNOWMANWINTEREVENT_API ASnowballProjectile : public APhysicsBasedProjectile
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _staticMesh;

	UPROPERTY(VisibleAnywhere, Export)
	USphereComponent* _worldCollision;

	UPROPERTY(VisibleAnywhere, Export)
	USphereComponent* _playerDetector;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _tagsPreventingPlayerHit;

	UPROPERTY(Export)
	UPoolableProjectileComponent* _poolableProjectileComponent;

	UPROPERTY(Transient)
	TSet<ABaseProjectile*> _cachedProjectilesInGame;

	UPROPERTY(EditDefaultsOnly)
	float _poolDelayTime;

private:
	UFUNCTION()
	void OnPlayerDetectorHit(UPrimitiveComponent* primitiveComponent, const FHitResult& hitResult);

	UFUNCTION()
	void OnCollisionComponentHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, FVector normalImpulse, const FHitResult& hitResult);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballThrown(const FVector& launchDirection, float launchSpeed);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerHit(ADBDPlayer* hitPlayer, FImpactInfo impactInfo);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCollisionHit(AActor* hitActor, FImpactInfo impactInfo);

public:
	ASnowballProjectile();
};

FORCEINLINE uint32 GetTypeHash(const ASnowballProjectile) { return 0; }
