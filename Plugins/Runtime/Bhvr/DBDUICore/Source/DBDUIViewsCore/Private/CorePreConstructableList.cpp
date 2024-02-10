#include "CorePreConstructableList.h"

UCorePreConstructableList::UCorePreConstructableList()
{
	this->_owningObject = NULL;
	this->_widgetList = TArray<UCoreBaseUserWidget*>();
	this->_userWidgetClass = NULL;
	this->_container = NULL;
}
