#include "StatusViewSource.h"

FStatusViewSource::FStatusViewSource()
{
	this->_sourceID = NAME_None;
	this->_isActive = false;
	this->_remainingTime = 0.0f;
	this->_percentageFill = 0.0f;
	this->_level = 0;
	this->_sourceType = EInventoryItemType::None;
	this->_sourceIconIndex = 0;
	this->_sourceLevel = 0;
	this->_isVisuallyInfinite = false;
}
