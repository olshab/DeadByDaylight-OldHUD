#include "BTTask_InputPress.h"

UBTTask_InputPress::UBTTask_InputPress()
{
	this->Input = EPawnInputPressTypes::None;
	this->InputMode = ETaskInputPressModes::Once;
	this->LockInput = false;
}
