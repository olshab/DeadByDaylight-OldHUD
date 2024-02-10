#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPlayerRole.h"
#include "EButtonDisableState.h"
#include "TimerFlagViewData.h"
#include "EMainMenuButtonType.h"
#include "MainMenuViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UMainMenuViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IMainMenuViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetUiTakeoverActive(const bool isActive);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitleVisible(EMainMenuButtonType buttonType, bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitle(EMainMenuButtonType buttonType, const FText& subtitle);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetStoreButtonFlags(bool hasNewItem, const FTimerFlagViewData& remainingLimitedItemTimeData, const FTimerFlagViewData& remainingSaleTimeData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMatchmakingIncentive(const FName& gameMode, EPlayerRole role, int32 percentAmount);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLTEButtons(const TArray<FName>& eventNames);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLabelButton(EMainMenuButtonType buttonType, const FText& label);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChangeAccountInputSwitcherVisible(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChangeAccountInputSwitcherPlayerNickname(const FString& playerNickname);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChallengesButtonVisibility(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetButtonVisibility(EMainMenuButtonType buttonType, bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetButtonNotificationVisibility(EMainMenuButtonType buttonType, bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetButtonIcon(EMainMenuButtonType buttonType, const FString& iconId);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetButtonEnabled(const EMainMenuButtonType buttonType, bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetButtonDisableState(const EMainMenuButtonType buttonType, EButtonDisableState buttonDisableState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetButtonDecorationVisible(EMainMenuButtonType buttonType, bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetButtonDecoration(EMainMenuButtonType buttonType, const FString& decorationId);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetButtonBetaFeatureVisibility(EMainMenuButtonType buttonType, bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ResetButton(EMainMenuButtonType buttonType);

	UFUNCTION(BlueprintNativeEvent)
	void DisplayMainMenu(const bool isDisplayed);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ClearButtonTimerFlags(EMainMenuButtonType buttonType);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void AddButtonTimerFlag(EMainMenuButtonType buttonType, const FTimerFlagViewData& timerFlagViewData);

};
