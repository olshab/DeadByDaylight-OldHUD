#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "EDailyRitualState.h"
#include "DailyRitualViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDailyRitualViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDailyRitualState RitualState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TextProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TextThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BarProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BarThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodpointsReward;

public:
	DBDUIVIEWINTERFACES_API FDailyRitualViewData();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualViewData) { return 0; }
