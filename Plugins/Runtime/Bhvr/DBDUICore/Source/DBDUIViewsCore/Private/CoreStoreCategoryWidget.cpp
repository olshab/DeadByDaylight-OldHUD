#include "CoreStoreCategoryWidget.h"
#include "StoreCategoryViewData.h"

void UCoreStoreCategoryWidget::SetData_Implementation(const FStoreCategoryViewData& data)
{

}

UCoreStoreCategoryWidget::UCoreStoreCategoryWidget()
{
	this->OnHoverBorder = NULL;
	this->_category = ECustomizationCategory::None;
}
