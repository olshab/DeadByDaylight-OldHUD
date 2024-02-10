#pragma once

#include "CoreMinimal.h"
#include "LoadoutMenuViewInterface.h"
#include "Blueprint/UserWidget.h"
#include "OnLoadoutMenuInventorySlotClick.h"
#include "Components/SlateWrapperTypes.h"
#include "OnPaginationAnimationCompleted.h"
#include "OnLoadoutMenuSlotClick.h"
#include "LoadoutMenuSlotIsSelected.h"
#include "OnLoadoutMenuPresetSlotClick.h"
#include "OnSelectedCharacterChanged.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "ETooltipHorizontalAlignment.h"
#include "ETooltipVerticalAlignment.h"
#include "TabWidgetData.h"
#include "ELoadoutSlot.h"
#include "EItemAvailability.h"
#include "LoadoutMenuWidget.generated.h"

class UCoreMenuItemWidget;
class UCoreMenuPowerWidget;
class UDBDRichTextBlock;
class UCoreMenuOfferingWidget;
class UDBDTextBlock;
class UDBDDropDownListButton;
class UDBDDropDownListWidget;
class UCoreMenuAddonWidget;
class UCoreMenuPerkWidget;
class UCorePresetWidgetContainer;
class UGridPanel;
class UCorePaginationContainerWidget;
class UCoreInputSwitcherWidget;
class UMenuLoadoutPartViewData;
class UDBDImage;
class UCoreMenuLoadoutPartWidget;
class URichTextBlock;
class ULoadoutMenuViewData;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API ULoadoutMenuWidget : public UUserWidget, public ILoadoutMenuViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuPowerItemRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuAddonRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuOfferingRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuPerkRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* BotRoleIndexText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuInventoryRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuSubtitleRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuPresetRTB;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDDropDownListWidget* DropDownListWidget;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDDropDownListButton* DropDownListTrigger;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPowerWidget* CoreMenuPower;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuItemWidget* CoreMenuItem;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuAddonWidget* CoreAddon_1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuAddonWidget* CoreAddon_2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuOfferingWidget* CoreOffering;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_3;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_4;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePresetWidgetContainer* PresetContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* InventoryGridContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePaginationContainerWidget* PaginationGridContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* LeftArrow;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RightArrow;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* PlusSignImage;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* LinkBarImage;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* AddonLinkBarImage;

	UPROPERTY()
	FOnPaginationAnimationCompleted _onPaginationAnimationCompletedDelegate;

	UPROPERTY()
	FOnLoadoutMenuSlotClick _onLoadoutMenuSlotClickedDelegate;

	UPROPERTY()
	FLoadoutMenuSlotIsSelected _onLoadoutMenuSlotSelectedDelegate;

	UPROPERTY()
	FOnLoadoutMenuInventorySlotClick _onLoadoutMenuInventorySlotClickedDelegate;

	UPROPERTY()
	FOnLoadoutMenuPresetSlotClick _onLoadoutMenuPresetSlotClickedDelegate;

	UPROPERTY()
	FOnSelectedCharacterChanged _onSelectedCharacterChangedDelegate;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuPowerWidget> _loadoutPowerClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuItemWidget> _loadoutItemWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuAddonWidget> _loadoutAddonClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuOfferingWidget> _loadoutOfferingClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuPerkWidget> _loadoutPerkClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCorePaginationContainerWidget> _paginationWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _inventoryPerRow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _inventoryPerColumn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _cellsPerRow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _inventoryItemPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _inventoryPerkPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _inventoryOfferingPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _inventoryPerkExtraNudge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _inventoryOfferingExtraNudge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreMenuLoadoutPartWidget*> _inventoryItemWidgetList;

	UPROPERTY(Transient, Export)
	TArray<UCoreMenuPerkWidget*> _perkSlotWidget;

	UPROPERTY(Transient, Export)
	TArray<UCoreMenuAddonWidget*> _addonSlotWidget;

	UPROPERTY(Transient)
	UMenuLoadoutPartViewData* _menuLoadoutPartViewData;

	UPROPERTY(Transient)
	ELoadoutSlot _loadoutSelectedSlot;

	UPROPERTY(Transient)
	int32 _numberOfPaginationItem;

	UPROPERTY(Transient)
	TArray<ULoadoutMenuViewData*> _perkData;

	UPROPERTY(Transient)
	TArray<ULoadoutMenuViewData*> _addonLoadoutData;

	UPROPERTY(Transient)
	TArray<ULoadoutMenuViewData*> _inventoryViewData;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RegressionButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* AlternativeButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	URichTextBlock* TitleText;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateInventoryItemData();

	UFUNCTION(BlueprintCallable)
	void ShowMenuLoadoutPartsTooltip(UCoreButtonWidget* hoveredSlotWidget);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetInventoryItemEnabled(UCoreMenuLoadoutPartWidget* widget, const EItemAvailability availability);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayPaginationOutAnimation(bool isNextPage);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayPaginationInAnimation();

private:
	UFUNCTION()
	void OnPaginationSelected(const int32 currentPage, bool isUpdate);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuRightArrowClicked();

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPresetClicked(const int32 selectedPresetId);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPowerSlotClicked(UCoreButtonWidget* menuPowerWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPerkSlotClicked(UCoreButtonWidget* menuPerkWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuOfferingSlotClicked(UCoreButtonWidget* menuOfferingWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuLeftArrowClicked();

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuItemSlotClicked(UCoreButtonWidget* menuItemWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuInventorySlotClicked(UCoreButtonWidget* menuPerkWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuAddonSlotClicked(UCoreButtonWidget* menuAddonWidget);

	UFUNCTION()
	void OnDropdownSelected(ESlateVisibility InVisibility);

	UFUNCTION()
	void OnDropDownListSelectedOptionChanged(FTabWidgetData buttonData);

protected:
	UFUNCTION(BlueprintCallable)
	void OnBackAction();

	UFUNCTION(BlueprintCallable)
	void OnAcceptAction();

private:
	UFUNCTION(BlueprintCallable)
	void HideMenuLoadoutPartsTooltip(UCoreButtonWidget* unhoveredSlotWidget);

public:
	ULoadoutMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutMenuWidget) { return 0; }
