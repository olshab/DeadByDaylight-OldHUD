#pragma once

#include "CoreMinimal.h"
#include "EventCollectionViewInterface.h"
#include "CoreTabContentWidget.h"
#include "EventEntryPopupSkinUIData.h"
#include "OnCustomizationItemClickedDelegate.h"
#include "EventEntryRewardsTabWidget.generated.h"

class UEventEntryRewardsDisplayWidget;
class UCoreKeyListenerInputPromptWidget;

UCLASS(EditInlineNew)
class UEventEntryRewardsTabWidget : public UCoreTabContentWidget, public IEventCollectionViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	FEventEntryPopupSkinUIData _skinData;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UEventEntryRewardsDisplayWidget* EventEntryRewardsDisplayWidget;

	UPROPERTY(BlueprintAssignable)
	FOnCustomizationItemClickedDelegate _onRewardGridItemClicked;

	UPROPERTY(BlueprintAssignable)
	FOnCustomizationItemClickedDelegate _onPreviewAreaItemClicked;

public:
	UFUNCTION(BlueprintCallable)
	void SetScrollPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt);

protected:
	UFUNCTION()
	void OnRewardGridItemClicked(const int32 selectedIndex);

	UFUNCTION()
	void OnPreviewAreaItemClicked(const int32 selectedIndex);

public:
	UEventEntryRewardsTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryRewardsTabWidget) { return 0; }
