#pragma once

#include "CoreMinimal.h"
#include "ScreenshotViewSetting.h"
#include "Engine/DataAsset.h"
#include "ScreenshotToolViewAsset.generated.h"

UCLASS()
class UScreenshotToolViewAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Charm;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting SurvivorHead;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting SurvivorTorso;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting SurvivorLegs;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting KillerHead;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting KillerBody;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting KillerWeapon;

public:
	UScreenshotToolViewAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolViewAsset) { return 0; }
