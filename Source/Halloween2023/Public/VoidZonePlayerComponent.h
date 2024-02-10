#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "VoidZonePlayerComponent.generated.h"

class UInteractionDefinition;
class UStatusEffect;
class ULinkedTeleporterComponent;
class UPlayerEventDispatcher;

UCLASS(meta=(BlueprintSpawnableComponent))
class UVoidZonePlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _voidWorldStatusEffects;

	UPROPERTY(Transient, Export)
	ULinkedTeleporterComponent* _lastVoidZoneTeleporterUsed;

	UPROPERTY(Transient, Export)
	UStatusEffect* _voidWorldHauntInteractionStatusEffect;

	UPROPERTY(Transient, Export)
	UPlayerEventDispatcher* _playerEventDispatcher;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _stateTagsWaitForInteractionEndOnVoidClose;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _owningPlayerInteraction;

private:
	UFUNCTION()
	void Authority_OnInteractionEnd();

public:
	UVoidZonePlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVoidZonePlayerComponent) { return 0; }
