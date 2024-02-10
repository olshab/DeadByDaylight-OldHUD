#pragma once

#include "CoreMinimal.h"
#include "EScreenshotToolTargetCategory.h"
#include "EScreenshotToolTargetSubCategory.h"
#include "ScreenshotToolTarget.generated.h"

USTRUCT()
struct FScreenshotToolTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EScreenshotToolTargetCategory Category;

	UPROPERTY(EditAnywhere)
	EScreenshotToolTargetSubCategory Subcategory;

	UPROPERTY(EditAnywhere)
	FString RawData;

public:
	DEADBYDAYLIGHT_API FScreenshotToolTarget();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolTarget) { return 0; }
