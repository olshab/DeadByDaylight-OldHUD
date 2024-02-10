#include "CoreInputSwitcherWidget.h"
#include "EUIActionType.h"
#include "Framework/Text/TextLayout.h"
#include "InputCoreTypes.h"
#include "UObject/SoftObjectPtr.h"

class UCoreButtonWidget;
class UCurveFloat;
class UMaterialInstance;
class UTexture2D;
class UCoreKeyListenerInputPromptWidget;

void UCoreInputSwitcherWidget::SetUIAction(const EUIActionType actionType)
{

}

void UCoreInputSwitcherWidget::SetRepeatable(bool isRepeatable, UCurveFloat* repetitionDelayCurve)
{

}

void UCoreInputSwitcherWidget::SetLabel(const FText& label)
{

}

void UCoreInputSwitcherWidget::SetKeyOverride(const FKey keyOverride)
{

}

void UCoreInputSwitcherWidget::SetEnabled(bool isEnabled)
{

}

void UCoreInputSwitcherWidget::SetBackground(TSoftObjectPtr<UMaterialInstance> backgroundMaterial)
{

}

void UCoreInputSwitcherWidget::SetAlignment(ETextJustify::Type newAlignment)
{

}

void UCoreInputSwitcherWidget::SetAdditionalIcon(TSoftObjectPtr<UTexture2D> iconTexture)
{

}

void UCoreInputSwitcherWidget::OnInputPromptTriggered()
{

}

void UCoreInputSwitcherWidget::OnButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreInputSwitcherWidget::OnAlignmentChanged_Implementation(ETextJustify::Type newAlignment)
{

}

UCoreKeyListenerInputPromptWidget* UCoreInputSwitcherWidget::GetInputPrompt() const
{
	return NULL;
}

UCoreButtonWidget* UCoreInputSwitcherWidget::GetButton() const
{
	return NULL;
}

UCoreInputSwitcherWidget::UCoreInputSwitcherWidget()
{
	this->ButtonDisplayRule = EInputSwitcherDisplayRule::Undefined;
	this->InputPromptDisplayRule = EInputSwitcherDisplayRule::Undefined;
	this->ButtonPressedSfxName = TEXT("AudioEvent_UI_Select_Press");
	this->ButtonPressedSfx = NULL;
	this->ButtonHoveredSfxName = TEXT("AudioEvent_UI_Highlight");
	this->ButtonHoveredSfx = NULL;
	this->InputTriggeredSfxName = TEXT("AudioEvent_UI_Select_Release");
	this->InputTriggeredSfx = NULL;
	this->InputPrompt = NULL;
	this->Button = NULL;
	this->_shouldRegisterForInputInConstruct = true;
	this->_alignment = ETextJustify::Left;
	this->_isEnabled = true;
	this->SendAnalyticsData = false;
	this->AnalyticsName = TEXT("UNDEFINED");
}
