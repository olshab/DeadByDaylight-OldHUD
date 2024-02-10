#pragma once

#include "CoreMinimal.h"
#include "SpecialEventInfoViewData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventInfoViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString EventId;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString EventBannerFrameLabel;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString EventThemeFrameLabel;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText EventName;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsPastEvent;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString BloodwebCollectSoundEvent;

public:
	DBDUIVIEWINTERFACES_API FSpecialEventInfoViewData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventInfoViewData) { return 0; }
