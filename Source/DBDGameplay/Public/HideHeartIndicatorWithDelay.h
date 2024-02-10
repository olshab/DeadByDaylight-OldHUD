#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HideHeartIndicatorWithDelay.generated.h"

USTRUCT(BlueprintType)
struct FHideHeartIndicatorWithDelay
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag HideTag;

	UPROPERTY(EditAnywhere)
	float DelayWhenTagRemoved;

public:
	DBDGAMEPLAY_API FHideHeartIndicatorWithDelay();
};

FORCEINLINE uint32 GetTypeHash(const FHideHeartIndicatorWithDelay) { return 0; }
