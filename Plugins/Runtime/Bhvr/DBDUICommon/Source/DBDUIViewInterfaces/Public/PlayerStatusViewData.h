#pragma once
#include "CoreMinimal.h"
#include "DoctorStatusData.h"
#include "NightmareStatusData.h"
#include "EPlayerStatus.h"
#include "EObsessionUIState.h"
#include "EConnectionQuality.h"
#include "KillerStatusData.h"
#include "PlayerStatusViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPlayerStatusViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PlayerName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UTexture2D* PlayerPortraitIcon;

    UPROPERTY(BlueprintReadOnly, Transient)
    UTexture2D* PlayerPortraitIconOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerStatus PlayerStatusState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimerProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDeepWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsBot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLocalPlayerAKiller;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObsessionUIState ObsessionState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DrainStage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConnectionQuality ConnectionQualityStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKillerStatusData KillerStatusData;
    
    DBDUIVIEWINTERFACES_API FPlayerStatusViewData();
};

