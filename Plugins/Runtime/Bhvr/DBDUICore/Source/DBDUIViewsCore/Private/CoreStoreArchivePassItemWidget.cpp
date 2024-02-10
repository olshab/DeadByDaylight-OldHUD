#include "CoreStoreArchivePassItemWidget.h"
#include "StoreArchivePassViewData.h"

void UCoreStoreArchivePassItemWidget::SetData_Implementation(const FStoreArchivePassViewData& data)
{

}

UCoreStoreArchivePassItemWidget::UCoreStoreArchivePassItemWidget()
{
	this->IconIMG = NULL;
	this->TitleTB = NULL;
	this->SubTitleTB = NULL;
	this->OnHoverBorder = NULL;
}
