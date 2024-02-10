#pragma once

#include "CoreMinimal.h"
#include "ELockedElementType.h"
#include "DBDFeatureLockProgress.h"
#include "LockedFeatureTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FLockedFeatureTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ELockedElementType LockedElementType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDBDFeatureLockProgress FeatureLockProgress;

public:
	DBDUIVIEWINTERFACES_API FLockedFeatureTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FLockedFeatureTooltipViewData) { return 0; }
