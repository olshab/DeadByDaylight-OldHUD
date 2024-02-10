#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "LoudNoiseEventSystem.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULoudNoiseEventSystem : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _requiredPlayerStateTags;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _preventativePlayerStateTags;

public:
	ULoudNoiseEventSystem();
};

FORCEINLINE uint32 GetTypeHash(const ULoudNoiseEventSystem) { return 0; }
