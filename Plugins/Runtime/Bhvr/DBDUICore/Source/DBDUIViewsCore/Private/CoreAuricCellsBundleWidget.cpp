#include "CoreAuricCellsBundleWidget.h"
#include "AuricCellsBundleViewData.h"

class UCoreButtonWidget;

void UCoreAuricCellsBundleWidget::SetData(const FAuricCellsBundleViewData& bundleData)
{

}

void UCoreAuricCellsBundleWidget::OnBuyButtonClicked(UCoreButtonWidget* buttonTarget)
{

}

UCoreAuricCellsBundleWidget::UCoreAuricCellsBundleWidget()
{
	this->BuyButton = NULL;
	this->BaseAmountTextBlock = NULL;
	this->AmountTextBlock = NULL;
	this->TitleTextBlock = NULL;
	this->BonusPanel = NULL;
	this->BonusTextBlock = NULL;
	this->InfoTextBlock = NULL;
	this->IconImage = NULL;
}
