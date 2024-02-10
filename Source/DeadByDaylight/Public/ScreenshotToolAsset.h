#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NamedButton.h"
#include "ScreenshotToolAsset.generated.h"

class UScreenshotToolViewAsset;
class UDataTable;
class UScreenshotToolConfigurationAsset;
class UScreenshotToolAnimationAsset;

UCLASS()
class UScreenshotToolAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FNamedButton ReloadDBBtn;

	UPROPERTY(EditDefaultsOnly)
	UScreenshotToolViewAsset* Views;

	UPROPERTY(EditDefaultsOnly)
	UScreenshotToolAnimationAsset* Animations;

	UPROPERTY(EditDefaultsOnly)
	UScreenshotToolConfigurationAsset* Configuration;

	UPROPERTY(EditDefaultsOnly)
	UDataTable* ViewsOverridesDB;

public:
	UScreenshotToolAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolAsset) { return 0; }
