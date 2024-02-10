#include "CoreStoreCollectionsItemWidget.h"

class UStoreCollectionViewData;
class UCoreButtonWidget;

void UCoreStoreCollectionsItemWidget::SetupView_Implementation(UStoreCollectionViewData* collectionViewData)
{

}

void UCoreStoreCollectionsItemWidget::SetExpanded(bool expanded)
{

}

void UCoreStoreCollectionsItemWidget::OnItemClickedInternal(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCollectionsItemWidget::OnBannerButtonClicked()
{

}

bool UCoreStoreCollectionsItemWidget::IsExpanded() const
{
	return false;
}

UCoreStoreCollectionsItemWidget::UCoreStoreCollectionsItemWidget()
{
	this->TimerText = NULL;
	this->CountText = NULL;
	this->StoreCustomizationListBox = NULL;
	this->BannerButton = NULL;
	this->_storeCustomizationItemWidgetClass = NULL;
	this->_preConstructedItemsCount = 10;
	this->_layoutMask = 0;
	this->_itemList = NULL;
	this->_collectionViewData = NULL;
	this->_isExpanded = false;
}
