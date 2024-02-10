#include "CoreStoreSpecialPacksListWidget.h"
#include "StoreRedirectionData.h"

void UCoreStoreSpecialPacksListWidget::OnItemCustomizationClicked(const FStoreRedirectionData& redirectionData)
{

}

void UCoreStoreSpecialPacksListWidget::OnItemCharacterClicked(const FStoreRedirectionData& redirectionData)
{

}

void UCoreStoreSpecialPacksListWidget::OnItemBuyActionClicked(const FString& packId)
{

}

void UCoreStoreSpecialPacksListWidget::OnItemArchivePassClicked(const FName& archiveId, const FString& packId)
{

}

UCoreStoreSpecialPacksListWidget::UCoreStoreSpecialPacksListWidget()
{
	this->_preConstructedItemsCount = 5;
	this->_itemWidgetClass = NULL;
	this->Content = NULL;
	this->_itemList = NULL;
}
