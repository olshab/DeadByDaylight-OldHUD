#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnedPalletTracker.generated.h"

class APallet;
class USceneComponent;

UCLASS(Abstract)
class ASpawnedPalletTracker : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Replicated, Transient, Export)
	USceneComponent* _indicatorLocation;

	UPROPERTY(ReplicatedUsing=OnRep_TrackedPallet, Transient)
	APallet* _trackedPallet;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetIndicatorOutlineVisibility(bool activated);

private:
	UFUNCTION()
	void OnRep_TrackedPallet();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASpawnedPalletTracker();
};

FORCEINLINE uint32 GetTypeHash(const ASpawnedPalletTracker) { return 0; }
