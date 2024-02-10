#include "DailyRitualTileWidget.h"

class UCoreButtonWidget;

void UDailyRitualTileWidget::OnRemoveButtonClicked(UCoreButtonWidget* button)
{

}

void UDailyRitualTileWidget::OnClaimButtonClicked(UCoreButtonWidget* button)
{

}

UDailyRitualTileWidget::UDailyRitualTileWidget()
{
	this->ContainerSizeBox = NULL;
	this->IconImage = NULL;
	this->BackgroundImage = NULL;
	this->ProgressBar = NULL;
	this->BackgroundSheen = NULL;
	this->TitleTextBlock = NULL;
	this->RewardTextBlock = NULL;
	this->DescriptionTextBlock = NULL;
	this->ProgressTextBlock = NULL;
	this->ClaimButton = NULL;
	this->RemoveButton = NULL;
	this->DefaultBackgroundTexture = NULL;
	this->NewBackgroundTexture = NULL;
	this->CompletedBackgroundTexture = NULL;
}
