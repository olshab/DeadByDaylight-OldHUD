#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerCardAnimationSettingAnalytics.generated.h"

USTRUCT()
struct FPlayerCardAnimationSettingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString AnimationSetting;

public:
	DBDANALYTICS_API FPlayerCardAnimationSettingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardAnimationSettingAnalytics) { return 0; }
