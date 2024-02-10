#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "K33SurvivorDetectionComponent.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33SurvivorDetectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _detectionDistance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorStatusEffect;

	UPROPERTY(ReplicatedUsing=OnRep_SurvivorsInRange)
	TArray<TWeakObjectPtr<ACamperPlayer>> _survivorsInRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _bufferTimeBeforeActivatingSurvivorDetection;

private:
	UFUNCTION()
	void OnRep_SurvivorsInRange();

	UFUNCTION()
	void Authority_OnSurvivorInRangeChanged(const bool inRange, ACamperPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33SurvivorDetectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33SurvivorDetectionComponent) { return 0; }
