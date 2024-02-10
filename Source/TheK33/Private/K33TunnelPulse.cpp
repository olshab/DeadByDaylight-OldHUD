#include "K33TunnelPulse.h"

float AK33TunnelPulse::Cosmetic_GetFadeOutPercentage() const
{
	return 0.0f;
}

AK33TunnelPulse::AK33TunnelPulse()
{
	this->_lastPulseForwardOffset = 50.000000;
	this->_lastPulseUpOffset = 500.000000;
	this->_sideOffsetCurveMultiplier = NULL;
	this->_firstTunnelBlockSideOffsetCurveMultiplier = NULL;
	this->_lastTunnelBlockSideOffsetCurveMultiplier = NULL;
	this->_sideOffsetSize = 50.000000;
}
