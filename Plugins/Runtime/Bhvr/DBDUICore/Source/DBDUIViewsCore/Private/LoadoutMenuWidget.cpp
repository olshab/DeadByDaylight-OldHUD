#include "LoadoutMenuWidget.h"
#include "TabWidgetData.h"
#include "Components/SlateWrapperTypes.h"

class UCoreButtonWidget;

void ULoadoutMenuWidget::UpdateInventoryItemData()
{

}

void ULoadoutMenuWidget::ShowMenuLoadoutPartsTooltip(UCoreButtonWidget* hoveredSlotWidget)
{

}

void ULoadoutMenuWidget::OnPaginationSelected(const int32 currentPage, bool isUpdate)
{

}

void ULoadoutMenuWidget::OnLoadoutMenuRightArrowClicked()
{

}

void ULoadoutMenuWidget::OnLoadoutMenuPresetClicked(const int32 selectedPresetId)
{

}

void ULoadoutMenuWidget::OnLoadoutMenuPowerSlotClicked(UCoreButtonWidget* menuPowerWidget)
{

}

void ULoadoutMenuWidget::OnLoadoutMenuPerkSlotClicked(UCoreButtonWidget* menuPerkWidget)
{

}

void ULoadoutMenuWidget::OnLoadoutMenuOfferingSlotClicked(UCoreButtonWidget* menuOfferingWidget)
{

}

void ULoadoutMenuWidget::OnLoadoutMenuLeftArrowClicked()
{

}

void ULoadoutMenuWidget::OnLoadoutMenuItemSlotClicked(UCoreButtonWidget* menuItemWidget)
{

}

void ULoadoutMenuWidget::OnLoadoutMenuInventorySlotClicked(UCoreButtonWidget* menuPerkWidget)
{

}

void ULoadoutMenuWidget::OnLoadoutMenuAddonSlotClicked(UCoreButtonWidget* menuAddonWidget)
{

}

void ULoadoutMenuWidget::OnDropdownSelected(ESlateVisibility InVisibility)
{

}

void ULoadoutMenuWidget::OnDropDownListSelectedOptionChanged(FTabWidgetData buttonData)
{

}

void ULoadoutMenuWidget::OnBackAction()
{

}

void ULoadoutMenuWidget::OnAcceptAction()
{

}

void ULoadoutMenuWidget::HideMenuLoadoutPartsTooltip(UCoreButtonWidget* unhoveredSlotWidget)
{

}

ULoadoutMenuWidget::ULoadoutMenuWidget() : UUserWidget(FObjectInitializer::Get())
{
	this->LoadoutMenuPowerItemRTB = NULL;
	this->LoadoutMenuAddonRTB = NULL;
	this->LoadoutMenuOfferingRTB = NULL;
	this->LoadoutMenuPerkRTB = NULL;
	this->BotRoleIndexText = NULL;
	this->LoadoutMenuInventoryRTB = NULL;
	this->LoadoutMenuSubtitleRTB = NULL;
	this->LoadoutMenuPresetRTB = NULL;
	this->DropDownListWidget = NULL;
	this->DropDownListTrigger = NULL;
	this->CoreMenuPower = NULL;
	this->CoreMenuItem = NULL;
	this->CoreAddon_1 = NULL;
	this->CoreAddon_2 = NULL;
	this->CoreOffering = NULL;
	this->CorePerk_1 = NULL;
	this->CorePerk_2 = NULL;
	this->CorePerk_3 = NULL;
	this->CorePerk_4 = NULL;
	this->PresetContainer = NULL;
	this->InventoryGridContainer = NULL;
	this->PaginationGridContainer = NULL;
	this->LeftArrow = NULL;
	this->RightArrow = NULL;
	this->PlusSignImage = NULL;
	this->LinkBarImage = NULL;
	this->AddonLinkBarImage = NULL;
	this->_loadoutPowerClass = NULL;
	this->_loadoutItemWidgetClass = NULL;
	this->_loadoutAddonClass = NULL;
	this->_loadoutOfferingClass = NULL;
	this->_loadoutPerkClass = NULL;
	this->_paginationWidgetClass = NULL;
	this->_inventoryPerRow = 3;
	this->_inventoryPerColumn = 5;
	this->_cellsPerRow = 5;
	this->_inventoryPerkExtraNudge = 0.000000;
	this->_inventoryOfferingExtraNudge = 0.000000;
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->_inventoryItemWidgetList = TArray<UCoreMenuLoadoutPartWidget*>();
	this->_perkSlotWidget = TArray<UCoreMenuPerkWidget*>();
	this->_addonSlotWidget = TArray<UCoreMenuAddonWidget*>();
	this->_menuLoadoutPartViewData = NULL;
	this->_loadoutSelectedSlot = ELoadoutSlot::SKIN;
	this->_numberOfPaginationItem = 0;
	this->_perkData = TArray<ULoadoutMenuViewData*>();
	this->_addonLoadoutData = TArray<ULoadoutMenuViewData*>();
	this->_inventoryViewData = TArray<ULoadoutMenuViewData*>();
	this->RegressionButton = NULL;
	this->AlternativeButton = NULL;
	this->TitleText = NULL;
}
