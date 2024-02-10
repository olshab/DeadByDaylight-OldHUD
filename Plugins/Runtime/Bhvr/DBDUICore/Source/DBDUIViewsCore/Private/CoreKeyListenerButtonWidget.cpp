#include "CoreKeyListenerButtonWidget.h"
#include "EUIActionType.h"
#include "InputCoreTypes.h"

void UCoreKeyListenerButtonWidget::SetUIAction(const EUIActionType actionType)
{

}

void UCoreKeyListenerButtonWidget::SetKeyOverride(const FKey keyOverride)
{

}

UCoreKeyListenerButtonWidget::UCoreKeyListenerButtonWidget()
{
	this->IsKeyboardLabelVisible = false;
	this->InputNameTB = NULL;
}
