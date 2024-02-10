#include "CoreKeyListenerInputPromptWidget.h"
#include "EUIActionType.h"
#include "InputCoreTypes.h"
#include "UObject/SoftObjectPtr.h"

class UCurveFloat;
class UTexture2D;

void UCoreKeyListenerInputPromptWidget::SetUIAction(const EUIActionType actionType)
{

}

void UCoreKeyListenerInputPromptWidget::SetRepeatable(bool isRepeatable, UCurveFloat* repetitionDelayCurve)
{

}

void UCoreKeyListenerInputPromptWidget::SetLabel(const FText& label)
{

}

void UCoreKeyListenerInputPromptWidget::SetKeyOverride(const FKey keyOverride)
{

}

void UCoreKeyListenerInputPromptWidget::SetEnabled(bool isEnabled)
{

}

void UCoreKeyListenerInputPromptWidget::SetBetaFeatureOverlayVisible(bool isVisible)
{

}

void UCoreKeyListenerInputPromptWidget::SetAdditionalIcon(TSoftObjectPtr<UTexture2D> iconTexture)
{

}

bool UCoreKeyListenerInputPromptWidget::IsEnabled() const
{
	return false;
}

UCoreKeyListenerInputPromptWidget::UCoreKeyListenerInputPromptWidget()
{
	this->ClickedSfxName = TEXT("AudioEvent_UI_Select_Release");
	this->ClickedSfx = NULL;
	this->InputPrompt = NULL;
	this->LabelTB = NULL;
	this->AdditionalIconIMG = NULL;
}
