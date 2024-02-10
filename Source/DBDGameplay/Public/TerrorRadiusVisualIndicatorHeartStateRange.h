#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TerrorRadiusVisualIndicatorHeartStateRange.generated.h"

USTRUCT()
struct FTerrorRadiusVisualIndicatorHeartStateRange
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float StartVolume;

	UPROPERTY(EditAnywhere)
	FGameplayTag HeartTag;

public:
	DBDGAMEPLAY_API FTerrorRadiusVisualIndicatorHeartStateRange();
};

FORCEINLINE uint32 GetTypeHash(const FTerrorRadiusVisualIndicatorHeartStateRange) { return 0; }
