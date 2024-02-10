#include "CoreStoreFeaturedCustomizationItemContainerWidget.h"
#include "StoreRedirectionData.h"

class UStoreCustomizationItemViewData;
class UCoreSelectableButtonWidget;

void UCoreStoreFeaturedCustomizationItemContainerWidget::SetItems_Implementation(const TArray<UStoreCustomizationItemViewData*>& viewDataArray)
{

}

void UCoreStoreFeaturedCustomizationItemContainerWidget::OnSelectedItemChanged(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreStoreFeaturedCustomizationItemContainerWidget::OnMoveToCharactersCustomizationPageRequested(const FStoreRedirectionData& redirectionData)
{

}

void UCoreStoreFeaturedCustomizationItemContainerWidget::OnMoveCompleted()
{

}

void UCoreStoreFeaturedCustomizationItemContainerWidget::MovePrevious()
{

}

void UCoreStoreFeaturedCustomizationItemContainerWidget::MoveNext()
{

}

void UCoreStoreFeaturedCustomizationItemContainerWidget::InitItemContainer_Implementation()
{

}

UCoreStoreFeaturedCustomizationItemContainerWidget::UCoreStoreFeaturedCustomizationItemContainerWidget()
{
	this->ItemTileClass = NULL;
	this->Root = NULL;
	this->LeftArrow = NULL;
	this->RightArrow = NULL;
	this->MaxVisibleTiles = 7;
	this->TileHeight = 750;
	this->SmallTileWidth = 500;
	this->BigTileWidth = 1500;
	this->TileSpacing = 50;
	this->TranslationDuration = 0.500000;
	this->TranslationEasingType = EEasingType::Linear;
	this->_cachedData = TArray<UStoreCustomizationItemViewData*>();
	this->_usedTilePool = TArray<UCoreStoreFeaturedCustomizationItemWidget*>();
	this->_availableTilePool = TArray<UCoreStoreFeaturedCustomizationItemWidget*>();
	this->_positionToWidgetMap = TMap<int32, UCoreStoreFeaturedCustomizationItemWidget*>();
}
