#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ERewardType.h"
#include "ECurrencyType.h"
#include "CoreRitualsBackendData.generated.h"

USTRUCT(BlueprintType)
struct FCoreRitualsBackendData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 DifficultyThreshold;

	UPROPERTY(EditAnywhere)
	float DifficultyTolerance;

	UPROPERTY(EditAnywhere)
	int32 DifficultyDisplayThreshold;

	UPROPERTY(EditAnywhere)
	ERewardType DifficultyRewardsType;

	UPROPERTY(EditAnywhere)
	int32 DifficultyRewardsAmount;

	UPROPERTY(EditAnywhere)
	ECurrencyType DifficultyRewardsId;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString RitualId;

public:
	DEADBYDAYLIGHT_API FCoreRitualsBackendData();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRitualsBackendData) { return 0; }
