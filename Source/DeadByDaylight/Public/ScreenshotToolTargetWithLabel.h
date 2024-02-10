#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolTarget.h"
#include "ScreenshotToolTargetWithLabel.generated.h"

USTRUCT()
struct FScreenshotToolTargetWithLabel
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FScreenshotToolTarget Data;

public:
	DEADBYDAYLIGHT_API FScreenshotToolTargetWithLabel();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolTargetWithLabel) { return 0; }
