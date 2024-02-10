#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplaySpawnerComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameplaySpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_SpawnedComponents, Export)
	TArray<UActorComponent*> _spawnedComponents;

	UPROPERTY(Replicated)
	int32 _numComponentsSpawned;

	UPROPERTY(Replicated)
	int32 _numComponentsToSpawn;

private:
	UFUNCTION()
	void OnRep_SpawnedComponents();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGameplaySpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGameplaySpawnerComponent) { return 0; }
