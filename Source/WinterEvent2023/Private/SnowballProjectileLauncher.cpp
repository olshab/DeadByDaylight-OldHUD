#include "SnowballProjectileLauncher.h"

USnowballProjectileLauncher::USnowballProjectileLauncher()
{
	this->_snowballPitchCurve = NULL;
	this->_snowballLaunchPitchMin = 0.000000;
	this->_snowballLaunchPitchMax = 5.000000;
	this->_characterBoneNameCamper = NAME_None;
	this->_characterBoneNameSlasher = NAME_None;
}
