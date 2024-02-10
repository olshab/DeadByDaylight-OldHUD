#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "PrestigeRewardStruct.h"
#include "PrestigeRewardData.generated.h"

USTRUCT()
struct FPrestigeRewardData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 AssociatedCharacter;

	UPROPERTY(EditAnywhere)
	int32 PrestigeLevel;

	UPROPERTY(EditAnywhere)
	FPrestigeRewardStruct Rewards;

public:
	DEADBYDAYLIGHT_API FPrestigeRewardData();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeRewardData) { return 0; }
