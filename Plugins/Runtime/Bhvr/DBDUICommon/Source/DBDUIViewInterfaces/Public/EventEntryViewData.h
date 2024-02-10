#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "EventEntryViewData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UEventEntryViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime StartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText AvailabilityDates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EventFrameLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ImageBannerText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EventTabMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> ImageTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldShowEventTomeButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldActivateUiTakeover;

public:
	UEventEntryViewData();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryViewData) { return 0; }
