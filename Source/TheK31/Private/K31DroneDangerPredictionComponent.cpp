#include "K31DroneDangerPredictionComponent.h"

UK31DroneDangerPredictionComponent::UK31DroneDangerPredictionComponent()
{
	this->_minimumTraverseAngle = 2.000000;
	this->_maximumTraverseAngle = 45.000000;
	this->_crouchRangeMargin = 100.000000;
	this->_crouchingHeightDifference = 11.000000;
	this->_crouchAngleNumerator = 4000.000000;
	this->_crouchRotatingSpeedPercentAngleMargin = 0.200000;
	this->_maxCrouchRange = 250.000000;
	this->_activeUnhackableWeight = -35.000000;
	this->_activeHackableWeight = -20.000000;
	this->_scoutingWeight = -10.000000;
}
