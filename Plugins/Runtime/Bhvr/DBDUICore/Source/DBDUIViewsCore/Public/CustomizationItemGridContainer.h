#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EFlagSize.h"
#include "Templates/SubclassOf.h"
#include "CustomizationItemGridContainer.generated.h"

class UUniformGridPanel;
class UCoreStoreCustomizationItemWidget;
class UCoreSelectableButtonWidget;
class UUserWidget;
class UStoreCustomizationItemViewData;
class UDBDScrollBox;
class UCoreKeyListenerInputPromptWidget;

UCLASS(EditInlineNew)
class UCustomizationItemGridContainer : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedDelegate, const int32, selectedIndex);

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _customizationRewardWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UUserWidget> _emptyRewardWidgetClass;

	UPROPERTY(EditAnywhere)
	bool _setSmallTemplate;

	UPROPERTY(EditAnywhere)
	int32 _columnCountInGrid;

	UPROPERTY(EditAnywhere)
	float _customizationTileScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlagSize _flagSize;

	UPROPERTY(EditAnywhere)
	int32 _rowCountToShowScrollBar;

	UPROPERTY(EditAnywhere)
	bool _fillGridWithEmptyItems;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUniformGridPanel* GridContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDScrollBox* ScrollBox;

	UPROPERTY(BlueprintReadOnly)
	FText _scrollLabelText;

	UPROPERTY(Transient, Export)
	TArray<UCoreStoreCustomizationItemWidget*> _customizationRewards;

public:
	UFUNCTION(BlueprintCallable)
	void SetSelectedItem(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void SetScrollPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt);

	UFUNCTION(BlueprintCallable)
	void SetItemsLayout(int32 layoutMask);

	UFUNCTION(BlueprintCallable)
	void SetData(const TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, const int32 selectedIndex);

protected:
	UFUNCTION()
	void OnItemClicked(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void ClearGrid();

public:
	UCustomizationItemGridContainer();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationItemGridContainer) { return 0; }
