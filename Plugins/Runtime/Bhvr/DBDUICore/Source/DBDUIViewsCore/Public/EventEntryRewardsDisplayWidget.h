#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EventEntryPopupSkinUIData.h"
#include "CustomizationItemPreviewAreaViewData.h"
#include "CustomizationItemOriginViewData.h"
#include "EventEntryRewardsDisplayWidget.generated.h"

class UCustomizationItemGridContainer;
class UCoreImagePreviewAreaWidget;
class UCoreKeyListenerInputPromptWidget;
class UCustomizationItemOriginWidget;
class UStoreCustomizationItemViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UEventEntryRewardsDisplayWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizationItemGridContainer* RewardGrid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreImagePreviewAreaWidget* PreviewArea;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizationItemOriginWidget* InstructionWidget;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVisuals(FEventEntryPopupSkinUIData skinUIData);

	UFUNCTION(BlueprintCallable)
	void SetSelectedReward(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void SetScrollPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt);

	UFUNCTION(BlueprintCallable)
	void SetPreviewAreaData(const FCustomizationItemPreviewAreaViewData& viewData);

	UFUNCTION(BlueprintCallable)
	void SetItemsData(const TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void SetInstructionWidgetData(const FCustomizationItemOriginViewData& viewData);

	UFUNCTION(BlueprintCallable)
	void DisableInstructionStoreButton();

	UFUNCTION(BlueprintCallable)
	void DisableInstructionCurrencyButton();

	UFUNCTION(BlueprintCallable)
	void DisableInstructionArchivesButton();

	UFUNCTION(BlueprintCallable)
	void DisableInputs();

public:
	UEventEntryRewardsDisplayWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryRewardsDisplayWidget) { return 0; }
