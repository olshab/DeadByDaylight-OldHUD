#include "CoreHudAntiCampSelfUnhookMeterWidget.h"
#include "EAntiCampSelfUnhookMeterState.h"

EAntiCampSelfUnhookMeterState UCoreHudAntiCampSelfUnhookMeterWidget::GetState() const
{
	return EAntiCampSelfUnhookMeterState::Hidden;
}

float UCoreHudAntiCampSelfUnhookMeterWidget::GetProgress() const
{
	return 0.0f;
}

EAntiCampSelfUnhookMeterState UCoreHudAntiCampSelfUnhookMeterWidget::GetPreviousState() const
{
	return EAntiCampSelfUnhookMeterState::Hidden;
}

UCoreHudAntiCampSelfUnhookMeterWidget::UCoreHudAntiCampSelfUnhookMeterWidget()
{

}
