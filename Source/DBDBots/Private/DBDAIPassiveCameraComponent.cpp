#include "DBDAIPassiveCameraComponent.h"

UDBDAIPassiveCameraComponent::UDBDAIPassiveCameraComponent()
{
	this->RotateCameraOnStationaryWaitTime = 0.000000;
	this->RotateCameraOnStationaryDegreePerSecond = 45.000000;
	this->CameraRotationTotalRaycasts = 20;
	this->ForwardViewHalfAngle = 45.000000;
	this->FocusPointCandidateRemoveOppositeHalfAngle = 60.000000;
	this->FocusPointCandidateForceKeepDistance = 2000.000000;
	this->FocusPointCandidateMinDistance = 400.000000;
	this->InvalidKillerLocationRangeRatio = 2.000000;
}
