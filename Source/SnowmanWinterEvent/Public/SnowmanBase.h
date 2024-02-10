#pragma once

#include "CoreMinimal.h"
#include "PoolableActor.h"
#include "Interactable.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "SnowmanSpawnData.h"
#include "SnowmanBase.generated.h"

class USnowmanAttackableComponent;

UCLASS()
class SNOWMANWINTEREVENT_API ASnowmanBase : public AInteractable, public IPoolableActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToRespawn;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToBeDestroyed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, meta=(BindWidgetOptional))
	USnowmanAttackableComponent* _snowmanAttackable;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _concealSnowmanForPlayerTags;

	UPROPERTY(ReplicatedUsing=OnRep_SpawnData)
	FSnowmanSpawnData _spawnData;

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsAcquiredFromPool)
	bool _isAcquiredFromPool;

	UPROPERTY(ReplicatedUsing=OnRep_IsHidden)
	bool _isHidden;

	UPROPERTY(ReplicatedUsing=OnRep_MaterialVariantIndex)
	int32 _materialVariantIndex;

private:
	UFUNCTION()
	void OnRep_SpawnData();

	UFUNCTION()
	void OnRep_MaterialVariantIndex();

	UFUNCTION()
	void OnRep_IsHidden();

	UFUNCTION()
	void OnRep_IsAcquiredFromPool();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetSnowmanMaterialVariant(const int32 materialVariantIndex);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASnowmanBase();
};

FORCEINLINE uint32 GetTypeHash(const ASnowmanBase) { return 0; }
