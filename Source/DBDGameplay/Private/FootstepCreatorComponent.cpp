#include "FootstepCreatorComponent.h"

UFootstepCreatorComponent::UFootstepCreatorComponent()
{
	this->_fadeCurve = NULL;
	this->_veinsCurve = NULL;
	this->_footstepManagerComponentClass = NULL;
	this->_secondsUntilFootprintTrigger = 0.100000;
	this->_canSpawnFootstepsDefaultValue = true;
}
