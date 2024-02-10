#pragma once

#include "CoreMinimal.h"
#include "RewardViewData.h"
#include "CharacterTooltipViewData.h"
#include "CharacterRewardViewData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterRewardViewData: public FRewardViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Prestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCharacterTooltipViewData TooltipData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEnabled;

public:
	DBDUIVIEWINTERFACES_API FCharacterRewardViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterRewardViewData) { return 0; }
