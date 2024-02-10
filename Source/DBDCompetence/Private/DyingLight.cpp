#include "DyingLight.h"

class ACamperPlayer;

void UDyingLight::OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession)
{

}

float UDyingLight::GetObsessionActionSpeedBonus() const
{
	return 0.0f;
}

float UDyingLight::GetActionSpeedPenaltyPerTokenAtLevel() const
{
	return 0.0f;
}

UDyingLight::UDyingLight()
{
	this->_actionSpeedPenaltyPerToken = TArray<float>();
	this->_obsessionActionSpeedBonus = 0.000000;
	this->_obsessionStatusEffect = NULL;
	this->_nonObsessionStatusEffect = NULL;
	this->_survivorDebuffs = TArray<UStatusEffect*>();
}
