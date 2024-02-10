#pragma once

#include "CoreMinimal.h"
#include "SettingsButtonClickedDelegate.h"
#include "MenuTabSelectedDelegate.h"
#include "ProfileMenuViewInterface.h"
#include "BackButtonClickedDelegate.h"
#include "CoreBaseUserWidget.h"
#include "CoreProfileMenuWidget.generated.h"

class UCoreKeyListenerInputPromptWidget;
class UCoreTabContainerWidget;
class UCoreInputSwitcherWidget;
class UCoreSelectableButtonWidget;
class UCoreFooterInputSwitcherWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreProfileMenuWidget : public UCoreBaseUserWidget, public IProfileMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Export)
	UCoreTabContainerWidget* TabsContainer;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreFooterInputSwitcherWidget* SettingsInputSwitcher;

	UPROPERTY(BlueprintReadOnly, Export)
	UCoreKeyListenerInputPromptWidget* ScrollPrompt;

protected:
	UPROPERTY()
	FBackButtonClickedDelegate _backButtonClickedDelegate;

	UPROPERTY()
	FSettingsButtonClickedDelegate _settingsButtonClickedDelegate;

	UPROPERTY()
	FMenuTabSelectedDelegate _menuTabSelectedDelegate;

public:
	UFUNCTION()
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

protected:
	UFUNCTION()
	void OnBackButtonClicked();

public:
	UCoreProfileMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreProfileMenuWidget) { return 0; }
