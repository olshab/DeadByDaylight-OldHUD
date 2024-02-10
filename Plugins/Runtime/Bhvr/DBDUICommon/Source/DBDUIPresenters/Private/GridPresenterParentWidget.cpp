#include "GridPresenterParentWidget.h"
#include "Components/SlateWrapperTypes.h"

void UGridPresenterParentWidget::OnChildVisibilityChanged(ESlateVisibility InVisibility)
{

}

UGridPresenterParentWidget::UGridPresenterParentWidget()
{
	this->Container = NULL;
	this->DividerImage = NULL;
}
