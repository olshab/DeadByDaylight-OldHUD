#include "CoreButtonWidget.h"
#include "EButtonWidgetVisibility.h"
#include "UObject/SoftObjectPtr.h"
#include "Layout/Geometry.h"
#include "Framework/Text/TextLayout.h"

class UCurveFloat;
class UMaterialInstance;
class UTexture2D;

void UCoreButtonWidget::SetVisible(EButtonWidgetVisibility visible)
{

}

void UCoreButtonWidget::SetRepeatable(bool isRepeatable, UCurveFloat* repetitionDelayCurve)
{

}

void UCoreButtonWidget::SetPressable(bool isPressable)
{

}

void UCoreButtonWidget::SetLabel(const FText& label)
{

}

void UCoreButtonWidget::SetHoverable(bool isHoverable)
{

}

void UCoreButtonWidget::SetHoldable(bool isHoldable)
{

}

void UCoreButtonWidget::SetEnabled(bool isEnabled)
{

}

void UCoreButtonWidget::SetClickable(bool isClickable)
{

}

void UCoreButtonWidget::SetChargeable(bool isChargeable, UCurveFloat* holdingAnimCurve, float duration)
{

}

void UCoreButtonWidget::SetBackground(TSoftObjectPtr<UMaterialInstance> backgroundMaterial)
{

}

void UCoreButtonWidget::SetAlignment(ETextJustify::Type newAlignment)
{

}

void UCoreButtonWidget::SetAdditionalIcon(TSoftObjectPtr<UTexture2D> iconTexture)
{

}

void UCoreButtonWidget::OnInternalUnhovered()
{

}

void UCoreButtonWidget::OnInternalReleased()
{

}

void UCoreButtonWidget::OnInternalPressed()
{

}

void UCoreButtonWidget::OnInternalLongPressed()
{

}

void UCoreButtonWidget::OnInternalHovered()
{

}

void UCoreButtonWidget::OnInternalClicked()
{

}

bool UCoreButtonWidget::IsPressed() const
{
	return false;
}

bool UCoreButtonWidget::IsEnabled() const
{
	return false;
}

FGeometry UCoreButtonWidget::GetHitzonePaintSpaceGeometry() const
{
	return FGeometry{};
}

UCoreButtonWidget::UCoreButtonWidget()
{
	this->BackgroundIMG = NULL;
	this->AdditionalIconIMG = NULL;
	this->HoveredSfxName = TEXT("AudioEvent_UI_Highlight");
	this->HoveredSfx = NULL;
	this->PressedSfxName = TEXT("AudioEvent_UI_Select_Press");
	this->PressedSfx = NULL;
	this->ClickedSfxName = TEXT("AudioEvent_UI_Select_Release");
	this->ClickedSfx = NULL;
	this->AnalogCursorStickiness = EAnalogCursorStickiness::None;
	this->HitzoneButton = NULL;
	this->LabelTB = NULL;
	this->_alignment = ETextJustify::Left;
	this->SendAnalyticsData = false;
	this->AnalyticsName = TEXT("UNDEFINED");
}
