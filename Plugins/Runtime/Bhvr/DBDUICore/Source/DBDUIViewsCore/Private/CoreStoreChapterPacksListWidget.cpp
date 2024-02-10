#include "CoreStoreChapterPacksListWidget.h"
#include "StoreRedirectionData.h"

void UCoreStoreChapterPacksListWidget::OnItemRedirectClicked(const FString& chapterPackId, const FString& heritagePackId)
{

}

void UCoreStoreChapterPacksListWidget::OnItemCustomizationClicked(const FStoreRedirectionData& redirectionData)
{

}

void UCoreStoreChapterPacksListWidget::OnItemCharacterClicked(const FStoreRedirectionData& redirectionData)
{

}

void UCoreStoreChapterPacksListWidget::OnItemBuyActionClicked(const FString& packId)
{

}

UCoreStoreChapterPacksListWidget::UCoreStoreChapterPacksListWidget()
{
	this->_preConstructedItemsCount = 5;
	this->_itemWidgetClass = NULL;
	this->Content = NULL;
	this->_itemList = NULL;
}
