#include "CoreHudAimingCrosshairWidget.h"
#include "EAimingCrosshairState.h"

EAimingCrosshairState UCoreHudAimingCrosshairWidget::GetState() const
{
	return EAimingCrosshairState::Hidden;
}

float UCoreHudAimingCrosshairWidget::GetProgress() const
{
	return 0.0f;
}

EAimingCrosshairState UCoreHudAimingCrosshairWidget::GetPreviousState() const
{
	return EAimingCrosshairState::Hidden;
}

UCoreHudAimingCrosshairWidget::UCoreHudAimingCrosshairWidget()
{

}
