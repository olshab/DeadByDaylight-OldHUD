#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ToastInput.h"
#include "ToastNotificationViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FToastNotificationViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float DisplayDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float DelayBeforeInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<int32, FToastInput> Inputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> ToastIcon;

public:
	DBDUIVIEWINTERFACES_API FToastNotificationViewData();
};

FORCEINLINE uint32 GetTypeHash(const FToastNotificationViewData) { return 0; }
