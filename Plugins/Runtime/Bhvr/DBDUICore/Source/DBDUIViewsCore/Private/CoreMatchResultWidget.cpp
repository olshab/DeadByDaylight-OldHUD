#include "CoreMatchResultWidget.h"

UCoreMatchResultWidget::UCoreMatchResultWidget()
{
	this->_survivorDefaultResultText = FText::GetEmpty();
	this->_survivorResultTexts = TMap<EGameState, FText>();
	this->_killerDefaultResultText = FText::GetEmpty();
	this->_killerResultTexts = TMap<EKillerMatchResult, FText>();
}
