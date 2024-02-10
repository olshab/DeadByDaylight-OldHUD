#include "SpecialEventPlayerComponent.h"

USpecialEventPlayerComponent::USpecialEventPlayerComponent()
{
	this->_componentsAddToSurvivor = TArray<FComponentToAddInfo>();
	this->_componentsAddToKiller = TArray<FComponentToAddInfo>();
}
