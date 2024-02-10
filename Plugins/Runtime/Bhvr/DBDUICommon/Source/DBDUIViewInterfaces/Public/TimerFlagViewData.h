#pragma once

#include "CoreMinimal.h"
#include "EFlagType.h"
#include "EFlagSize.h"
#include "EFlagItemType.h"
#include "TimerFlagViewData.generated.h"

USTRUCT(BlueprintType)
struct FTimerFlagViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EFlagType FlagType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EFlagSize FlagSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EFlagItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString TimerText;

public:
	DBDUIVIEWINTERFACES_API FTimerFlagViewData();
};

FORCEINLINE uint32 GetTypeHash(const FTimerFlagViewData) { return 0; }
