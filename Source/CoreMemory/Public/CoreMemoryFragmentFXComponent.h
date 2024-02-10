#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "CoreMemoryFragmentFXComponent.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFragmentCosmeticEvent, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFragmentCollectedCosmeticEvent, ADBDPlayer*, player, float, percentProgress);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFragmentCosmeticEventTwoParam, ADBDPlayer*, player, float, floatVal);

public:
	UPROPERTY(BlueprintAssignable)
	FFragmentCosmeticEvent Cosmetic_FragmentTriggered;

	UPROPERTY(BlueprintAssignable)
	FFragmentCosmeticEvent Cosmetic_FragmentSpawned;

	UPROPERTY(BlueprintAssignable)
	FFragmentCosmeticEvent Cosmetic_FragmentDespawn;

	UPROPERTY(BlueprintAssignable)
	FFragmentCollectedCosmeticEvent Cosmetic_FragmentCollected;

private:
	UPROPERTY(EditDefaultsOnly)
	FRotator _tendrilMeshRotationOffset;

	UPROPERTY(EditDefaultsOnly)
	float _hoverHeight;

	UPROPERTY(BlueprintAssignable)
	FFragmentCosmeticEventTwoParam Cosmetic_FragmentDespawnCountingDown;

public:
	UCoreMemoryFragmentFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentFXComponent) { return 0; }
