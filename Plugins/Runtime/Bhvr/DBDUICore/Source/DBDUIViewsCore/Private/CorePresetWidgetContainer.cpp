#include "CorePresetWidgetContainer.h"

class UCoreSelectableButtonWidget;

void UCorePresetWidgetContainer::SetSelectedPreset(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCorePresetWidgetContainer::SetPreset(const TArray<int32>& presetData, const int32 selectedPreset)
{

}

UCorePresetWidgetContainer::UCorePresetWidgetContainer()
{
	this->Preset_1 = NULL;
	this->Preset_2 = NULL;
	this->Preset_3 = NULL;
	this->Preset_4 = NULL;
	this->_presetWidgets = TArray<UCoreSelectableButtonWidget*>();
}
