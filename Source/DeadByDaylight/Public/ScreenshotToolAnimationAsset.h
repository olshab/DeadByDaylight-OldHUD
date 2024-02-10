#pragma once

#include "CoreMinimal.h"
#include "OutfitAnimation.h"
#include "Engine/DataAsset.h"
#include "CharacterRoleAnimation.h"
#include "ScreenshotToolAnimationAsset.generated.h"

UCLASS()
class UScreenshotToolAnimationAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<FOutfitAnimation> AnimByOutfit;

	UPROPERTY(EditDefaultsOnly)
	TArray<FCharacterRoleAnimation> AnimByCharacter;

public:
	UScreenshotToolAnimationAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolAnimationAsset) { return 0; }
