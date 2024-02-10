#include "CoreStoreCustomizationItemWidget.h"
#include "StoreRedirectionData.h"

class UStoreCustomizationItemViewData;

void UCoreStoreCustomizationItemWidget::SetStoreCustomizationItemData_Implementation(UStoreCustomizationItemViewData* data)
{

}

FStoreRedirectionData UCoreStoreCustomizationItemWidget::MakeStoreRedirectionData() const
{
	return FStoreRedirectionData{};
}

UCoreStoreCustomizationItemWidget::UCoreStoreCustomizationItemWidget()
{
	this->_data = NULL;
}
