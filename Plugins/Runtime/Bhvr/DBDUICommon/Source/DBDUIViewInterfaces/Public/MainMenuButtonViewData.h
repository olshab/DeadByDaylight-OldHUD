#pragma once

#include "CoreMinimal.h"
#include "TimerFlagViewData.h"
#include "EMainMenuButtonType.h"
#include "MainMenuButtonViewData.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuButtonViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMainMenuButtonType ButtonType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Bonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimerFlagViewData Timer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLoadingSaveActivityInProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLoadingPlayerFacade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLoadingChunking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLockedFeature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDisabled;

public:
	DBDUIVIEWINTERFACES_API FMainMenuButtonViewData();
};

FORCEINLINE uint32 GetTypeHash(const FMainMenuButtonViewData) { return 0; }
