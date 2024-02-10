#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationAssetOutfitOverride.h"
#include "OutfitAnimation.generated.h"

USTRUCT()
struct FOutfitAnimation
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FCharacterAnimationAssetOutfitOverride Data;

public:
	DEADBYDAYLIGHT_API FOutfitAnimation();
};

FORCEINLINE uint32 GetTypeHash(const FOutfitAnimation) { return 0; }
