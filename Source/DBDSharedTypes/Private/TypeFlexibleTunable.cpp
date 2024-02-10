#include "TypeFlexibleTunable.h"

FTypeFlexibleTunable::FTypeFlexibleTunable()
{
	this->setType = EFlexibleTunableType::BooleanTunable;
	this->_boolValue = false;
	this->_floatValue = 0.0f;
	this->_intValue = 0;
	this->_stringValue = TEXT("");
	this->_arrayValue = TArray<FString>();
}
