#pragma once
#include "CoreMinimal.h"
#include "PlayerStatusViewData.h"
#include "EConnectionQuality.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "PlayerStatusViewInterface.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerStatusViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerStatusViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerAfflictionHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimerProgress(float value, bool isDeepWound);
    
    /*   NOT USED / DEPRECATED   */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerNameVisibility(bool visible);
    
    /*   NOT USED / DEPRECATED   */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetKiller(FGameplayTag killerTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const FPlayerStatusViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayTimerAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayHookEscapeFailedAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSurvivorSpecificPingIcon(const EConnectionQuality& connectionQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideSurvivorActivity();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSurvivorActivityProgress(const float progress);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableChasesMode(const bool isChased);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSurvivorActivity(const TSoftObjectPtr<UTexture2D>& activityIcon, const bool shouldDisplayProgress);
};

