#pragma once

#include "CoreMinimal.h"
#include "EMainMenuButtonType.h"
#include "MainMenuViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "OnChangeAccountButtonClicked.h"
#include "CoreMainMenuWidget.generated.h"

class UCoreMainMenuButtonWidget;
class UCoreFooterButtonWidget;
class UCoreInputSwitcherWidget;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMainMenuWidget : public UCoreBaseUserWidget, public IMainMenuViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* TutorialButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* ArchivesButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* StoreButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* ChallengesButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayKillerButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlaySurvivorButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayCustomGameButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventKillerButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventSurvivorButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* EventButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* DailyRitualsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* FriendsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* SettingsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* NewsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* CreditsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* MarketingInvitationButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* ExitButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* ChangeAccountInputSwitcher;

	UPROPERTY(BlueprintReadOnly)
	TArray<FName> _eventNames;

	UPROPERTY(BlueprintReadOnly)
	bool _isChallengesButtonAvailable;

private:
	UPROPERTY(BlueprintCallable)
	FOnChangeAccountButtonClicked OnChangeAccountButtonClickedDelegate;

	UPROPERTY(Export)
	TMap<FName, UCoreMainMenuButtonWidget*> PlayKillerButtons;

	UPROPERTY(Export)
	TMap<FName, UCoreMainMenuButtonWidget*> PlaySurvivorButtons;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ShowUiTakeover(bool show);

	UFUNCTION(BlueprintImplementableEvent)
	void ShowPlaySubMenu(bool open);

	UFUNCTION(BlueprintImplementableEvent)
	void ShowLimitedTimeEventSubMenu(bool open);

private:
	UFUNCTION()
	void OnTutorialButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnStoreButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnSettingsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnPlaySurvivorButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnPlayLimitedTimeEventSurvivorButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnPlayLimitedTimeEventKillerButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnPlayLimitedTimeEventButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnPlayKillerButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnPlayCustomButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnPlayButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnNewsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnFriendsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnExitButtonTriggered();

	UFUNCTION()
	void OnExitButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnEventButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnDailyRitualsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnCreditsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION()
	void OnArchivesButtonClicked(UCoreButtonWidget* target);

protected:
	UFUNCTION(BlueprintCallable)
	bool HasActiveLTE();

private:
	UFUNCTION(BlueprintCallable)
	UCoreBaseUserWidget* GetButton(EMainMenuButtonType button);

public:
	UCoreMainMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMainMenuWidget) { return 0; }
