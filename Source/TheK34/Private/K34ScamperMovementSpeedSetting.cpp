#include "K34ScamperMovementSpeedSetting.h"

FK34ScamperMovementSpeedSetting::FK34ScamperMovementSpeedSetting()
{
	this->SpeedCurve = NULL;
	this->MouseTurnLimitationCurve = NULL;
	this->ControllerTurnLimitationCurve = NULL;
	this->AccelerationMultiplierModifier = FStatProperty{};
	this->Duration = FStatProperty{};
}
