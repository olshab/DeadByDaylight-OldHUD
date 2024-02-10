#include "CoreHudEventObjectiveItemWidget.h"

UCoreHudEventObjectiveItemWidget::UCoreHudEventObjectiveItemWidget()
{
	this->_currentState = EEventObjectiveItemState::Inactive;
	this->_charges = 0;
	this->_maxCharges = 0;
}
