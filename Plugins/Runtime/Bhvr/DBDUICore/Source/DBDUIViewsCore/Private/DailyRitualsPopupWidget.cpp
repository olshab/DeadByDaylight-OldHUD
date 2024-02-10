#include "DailyRitualsPopupWidget.h"

void UDailyRitualsPopupWidget::OnDailyRitualRemoveButtonClicked(const FString& dailyRitualKey)
{

}

void UDailyRitualsPopupWidget::OnDailyRitualClaimButtonClicked(const FString& dailyRitualKey)
{

}

void UDailyRitualsPopupWidget::OnDailyRitualClaimAllButtonClicked()
{

}

UDailyRitualsPopupWidget::UDailyRitualsPopupWidget()
{
	this->BaseBG = NULL;
	this->DailyRitualsDetails = NULL;
	this->DailyRitualsContainer = NULL;
	this->FooterText = NULL;
	this->DefaultBackgroundMaterialInstance = NULL;
	this->AfterTrialBackgroundMaterialInstance = NULL;
}
