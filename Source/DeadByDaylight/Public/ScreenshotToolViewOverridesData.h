#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolTargetWithLabel.h"
#include "ScreenshotViewSetting.h"
#include "Engine/DataTable.h"
#include "ScreenshotToolViewOverridesData.generated.h"

USTRUCT()
struct FScreenshotToolViewOverridesData: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FScreenshotViewSetting Settings;

	UPROPERTY(EditDefaultsOnly)
	TArray<FScreenshotToolTargetWithLabel> Targets;

public:
	DEADBYDAYLIGHT_API FScreenshotToolViewOverridesData();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolViewOverridesData) { return 0; }
