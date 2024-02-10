#include "BTService_FindObject.h"

UBTService_FindObject::UBTService_FindObject()
{
	this->KillerAbility = EKillerAbilities::VE_None;
	this->RunEQSWhenFoundObject = false;
	this->RunDynamicSubtreeWhenFoundObject = false;
	this->DynamicSubtree = NULL;
	this->_aiOwner = NULL;
	this->_killer = NULL;
}
