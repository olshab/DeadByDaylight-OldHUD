#include "CoreRewardWrapperWidget.h"
#include "RewardWrapperViewData.h"

class UCoreRewardWidget;

void UCoreRewardWrapperWidget::SetScaleUserSpecified(float scale)
{

}

void UCoreRewardWrapperWidget::SetScaleToFit(float size)
{

}

void UCoreRewardWrapperWidget::SetIsLocked(bool isLocked, bool playAnimation)
{

}

void UCoreRewardWrapperWidget::SetIsClickable(bool isClickable)
{

}

void UCoreRewardWrapperWidget::SetData_Implementation(const FRewardWrapperViewData& viewData)
{

}

UCoreRewardWidget* UCoreRewardWrapperWidget::GetRewardWidget() const
{
	return NULL;
}

void UCoreRewardWrapperWidget::ClearData()
{

}

UCoreRewardWrapperWidget::UCoreRewardWrapperWidget() : UUserWidget(FObjectInitializer::Get())
{
	this->CharacterRewardWidget = NULL;
	this->CurrencyProgressionRewardWidget = NULL;
	this->CustomizationRewardWidget = NULL;
	this->RewardContainer = NULL;
	this->SizeBox = NULL;
	this->ScaleBox = NULL;
	this->_rewardWidget = NULL;
}
