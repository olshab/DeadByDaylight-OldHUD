#include "CoreStoreCollectionsListWidget.h"

class UCoreStoreCollectionsItemWidget;

void UCoreStoreCollectionsListWidget::OnUnfocusCollection(UCoreStoreCollectionsItemWidget* unfocusedWidget, const FString& collectionId)
{

}

void UCoreStoreCollectionsListWidget::OnFocusCollection(UCoreStoreCollectionsItemWidget* focusedWidget, const FString& collectionId)
{

}

void UCoreStoreCollectionsListWidget::OnCollectionItemClicked(const FString& collectionId, FName selectedItemId)
{

}

UCoreStoreCollectionsListWidget::UCoreStoreCollectionsListWidget()
{
	this->CollectionItemListBox = NULL;
	this->_collectionItemClass = NULL;
	this->_preConstructedItemsCount = 10;
	this->_itemList = NULL;
}
