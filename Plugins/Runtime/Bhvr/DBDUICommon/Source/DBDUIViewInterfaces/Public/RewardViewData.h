#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "RewardViewData.generated.h"

class UTexture2D;
class UUserWidget;

USTRUCT(BlueprintType)
struct FRewardViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftClassPtr<UUserWidget> AnimationWidgetClass;

public:
	DBDUIVIEWINTERFACES_API FRewardViewData();
};

FORCEINLINE uint32 GetTypeHash(const FRewardViewData) { return 0; }
