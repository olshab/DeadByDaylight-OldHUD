#include "MultipleLightsFader.h"

class ULightComponent;

void AMultipleLightsFader::SetAffectedLights(const TArray<ULightComponent*>& affectedLights)
{

}

AMultipleLightsFader::AMultipleLightsFader()
{
	this->_affectedLights = TArray<ULightComponent*>();
	this->_lightOriginalIntensities = TArray<float>();
	this->_timeMultiplier = 0.000000;
}
