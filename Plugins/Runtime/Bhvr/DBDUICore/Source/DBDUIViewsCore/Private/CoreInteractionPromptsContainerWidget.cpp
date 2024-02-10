#include "CoreInteractionPromptsContainerWidget.h"

UCoreInteractionPromptsContainerWidget::UCoreInteractionPromptsContainerWidget()
{
	this->CenterContainerBox = NULL;
	this->ContainerBox = NULL;
	this->InteractionPromptWidgetClass = NULL;
	this->MaxDisplayedPrompts = 0;
	this->MaxDisplayedCenterPrompts = 0;
	this->_promptViewDataList = TArray<FInteractionPromptViewData>();
	this->_centerPromptViewDataList = TArray<FInteractionPromptViewData>();
	this->_promptWidgets = TArray<UCoreInteractionPromptWidget*>();
	this->_centerPromptWidgets = TArray<UCoreInteractionPromptWidget*>();
	this->_displayedPromptsMap = TMap<FName, UCoreInteractionPromptWidget*>();
}
