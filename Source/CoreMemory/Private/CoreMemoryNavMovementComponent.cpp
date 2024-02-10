#include "CoreMemoryNavMovementComponent.h"

UCoreMemoryNavMovementComponent::UCoreMemoryNavMovementComponent()
{
	this->_navFilter = NULL;
	this->_movementAcceptanceRadius = 0.000000;
	this->_navAgentComponent = NULL;
}
