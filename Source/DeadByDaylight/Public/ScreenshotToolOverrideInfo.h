#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolOverrideInfo.generated.h"

USTRUCT()
struct FScreenshotToolOverrideInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	int16 PriorityHit;

	UPROPERTY(VisibleAnywhere)
	FName RowName;

	UPROPERTY(VisibleAnywhere)
	FName TargetLabel;

public:
	DEADBYDAYLIGHT_API FScreenshotToolOverrideInfo();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolOverrideInfo) { return 0; }
