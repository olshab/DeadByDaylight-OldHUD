#include "BTService_Flee.h"

UBTService_Flee::UBTService_Flee()
{
	this->PathStrategySelectorClass = NULL;
	this->IgnoreOnEndObjectInFocusCooldownTypes = TArray<UClass*>();
	this->OnEndObjectInFocusCooldown = 15.000000;
	this->ShouldFallPalletUnderHostileVerticalRange = 200.000000;
	this->ClearFleePathBBKeyDelay = 1.000000;
	this->_activePath = NULL;
	this->_lostFocusedObjects = TArray<UObject*>();
	this->_strategySelector = NULL;
}
