#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "ScreenshotToolCustomizationInfo.generated.h"

USTRUCT()
struct FScreenshotToolCustomizationInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	int32 CharacterId;

	UPROPERTY(VisibleAnywhere)
	FName Id;

	UPROPERTY(VisibleAnywhere)
	ECustomizationCategory Category;

public:
	DEADBYDAYLIGHT_API FScreenshotToolCustomizationInfo();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolCustomizationInfo) { return 0; }
