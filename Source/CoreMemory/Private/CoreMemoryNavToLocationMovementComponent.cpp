#include "CoreMemoryNavToLocationMovementComponent.h"

UCoreMemoryNavToLocationMovementComponent::UCoreMemoryNavToLocationMovementComponent()
{
	this->_navFilter = NULL;
	this->_movementAcceptanceRadius = 0.000000;
	this->_navAgentComponent = NULL;
}
