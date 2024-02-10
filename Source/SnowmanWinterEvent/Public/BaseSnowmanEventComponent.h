#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "BaseSnowmanEventComponent.generated.h"

class UStatusEffect;
class USnowmanSpawnPlacementStrategy;

UCLASS(meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API UBaseSnowmanEventComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _numSnowmenToSpawnAtStart;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USnowmanSpawnPlacementStrategy> _snowmanSpawnPlacementStrategyClass;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategy;

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _survivorInSnowmanEffectClasses;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _killerInSnowmanEffectClasses;

public:
	UBaseSnowmanEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBaseSnowmanEventComponent) { return 0; }
