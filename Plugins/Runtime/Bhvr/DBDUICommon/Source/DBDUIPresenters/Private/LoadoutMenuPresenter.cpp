#include "LoadoutMenuPresenter.h"
#include "InventorySlotData.h"
#include "EPlayerRole.h"
#include "ELoadoutSlot.h"

class ULoadoutMenuViewData;

ULoadoutMenuViewData* ULoadoutMenuPresenter::SetLoadoutViewData(const FInventorySlotData& slotData, const EPlayerRole playerRole)
{
	return NULL;
}

void ULoadoutMenuPresenter::OnSelectedCharacterChanged(int32 selectedCharacterIndex)
{

}

void ULoadoutMenuPresenter::OnLoadoutMenuSlotIsSelected(ELoadoutSlot slotSelected)
{

}

void ULoadoutMenuPresenter::OnLoadoutMenuPresetSelected(const int32 presetId, const ELoadoutSlot slotSelected)
{

}

void ULoadoutMenuPresenter::OnLoadoutMenuPresetClicked(const int32 presetId, const ELoadoutSlot slotSelected)
{

}

void ULoadoutMenuPresenter::OnLoadoutMenuInventorySlotClick(const ELoadoutSlot itemIndex, const FName itemId)
{

}

ULoadoutMenuPresenter::ULoadoutMenuPresenter()
{
	this->LoadoutMenuWidgetClass = NULL;
	this->_loadoutMenuSlotData = TArray<ULoadoutMenuViewData*>();
	this->_loadoutMenuInventoryData = TArray<ULoadoutMenuViewData*>();
}
