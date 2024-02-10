#include "BTService_SetMovementConversion.h"

UBTService_SetMovementConversion::UBTService_SetMovementConversion()
{
	this->FromMovementMode = ECharacterMovementTypes::Normal;
	this->ToMovementMode = ECharacterMovementTypes::Normal;
	this->ApplyOrder = 10;
}
