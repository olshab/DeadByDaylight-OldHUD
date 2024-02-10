#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionDefinition.h"
#include "ThrowSnowballInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API UThrowSnowballInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _preventativeStateTags;

public:
	UThrowSnowballInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UThrowSnowballInteraction) { return 0; }
