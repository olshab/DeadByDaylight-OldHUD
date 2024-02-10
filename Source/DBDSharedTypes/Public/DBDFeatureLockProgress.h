#pragma once

#include "CoreMinimal.h"
#include "DBDFeatureLockProgress.generated.h"

USTRUCT(BlueprintType)
struct FDBDFeatureLockProgress
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _wasSeen;

	UPROPERTY(BlueprintReadOnly)
	int32 _totalSteps;

	UPROPERTY(BlueprintReadOnly)
	int32 _remainingSteps;

public:
	DBDSHAREDTYPES_API FDBDFeatureLockProgress();
};

FORCEINLINE uint32 GetTypeHash(const FDBDFeatureLockProgress) { return 0; }
