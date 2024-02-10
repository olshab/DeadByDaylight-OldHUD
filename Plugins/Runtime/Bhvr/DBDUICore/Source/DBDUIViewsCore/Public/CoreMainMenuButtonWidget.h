#pragma once

#include "CoreMinimal.h"
#include "MultipleDisableStateButtonViewInterface.h"
#include "MainMenuButtonViewInterface.h"
#include "CoreLockedFeatureButtonWidget.h"
#include "Templates/SubclassOf.h"
#include "EGameType.h"
#include "EMainMenuButtonTemplate.h"
#include "Layout/Margin.h"
#include "EButtonDisableState.h"
#include "TimerFlagViewData.h"
#include "CoreMainMenuButtonWidget.generated.h"

class UCoreTimerFlagWidget;
class UVerticalBox;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMainMenuButtonWidget : public UCoreLockedFeatureButtonWidget, public IMultipleDisableStateButtonViewInterface, public IMainMenuButtonViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMainMenuButtonTemplate ButtonTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameType GameType;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	FMargin _timerFlagPadding;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreTimerFlagWidget> _timerFlagWidgetClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* TimerFlagContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* BonusLabelTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* BonusValueTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SubtitleTB;

	UPROPERTY(BlueprintReadWrite)
	EButtonDisableState _buttonDisableState;

	UPROPERTY(BlueprintReadWrite)
	bool _isNew;

	UPROPERTY(BlueprintReadOnly)
	bool _hasNewStoreItem;

	UPROPERTY(BlueprintReadOnly, Transient, Export)
	TArray<UCoreTimerFlagWidget*> _timerFlagWidgets;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateTimerFlagsVisibility();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateSubMenuVisuals(bool isGoingInSubMenu, bool isPreTransitionCall);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateNotificationVisibility();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSubtitleVisible(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSubtitle(const FText& subtitle);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNotificationVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIcon(const FString& eventId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetDecorationVisible(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetDecoration(const FString& decorationId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBonusVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBonusText(const FText& text);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlaySubMenuAnimation(bool isFadingOut, float animDuration);

protected:
	UFUNCTION(BlueprintCallable)
	UCoreTimerFlagWidget* CreateTimerFlag();

public:
	UFUNCTION(BlueprintCallable)
	void ClearAllTimerFlags();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddTimerFlag(const FTimerFlagViewData& timerFlagViewData);

public:
	UCoreMainMenuButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMainMenuButtonWidget) { return 0; }
