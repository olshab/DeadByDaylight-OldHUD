#include "BTTask_ExtMoveTo.h"

UBTTask_ExtMoveTo::UBTTask_ExtMoveTo()
{
	this->StrafeFocus = EExtMoveToStrafeFocusOptions::Never;
	this->StrafeFocusPitch = true;
	this->StrafeNearFocusModeUnderDistance = 300.000000;
	this->IntermittentOnStrafeFocusInterval = 4.000000;
	this->IntermittentOnStrafeFocusDeviation = 1.000000;
	this->IntermittentOffStrafeFocusInterval = 2.000000;
	this->IntermittentOffStrafeFocusDeviation = 0.500000;
	this->EndMoveStrafeFocusPrecisionAngle = 180.000000;
	this->StrafeFocusOwnerOnComponentBBKey = true;
	this->ToGoalMovementMode = ECharacterMovementTypes::Normal;
	this->NearGoalMovementMode = ECharacterMovementTypes::Normal;
	this->NearGoalModeUnderDistance = 300.000000;
	this->NormalMoveUnderNavLinkDistance = 150.000000;
	this->BlockedCheckInterval = 0.750000;
	this->BlockedContinueTimes = 2;
	this->BlockedSpeedPercent = 0.300000;
	this->MaxTriesToRepathAroundBlocker = 4;
	this->MovementModesNearActors = TArray<FMovementModeNearActor>();
	this->RepathInterval = 3.000000;
	this->UseAccelerationForPaths = true;
	this->PathReachedPointRadius = 70.000000;
	this->NearPathFilterRadius = 200.000000;
	this->UseContextualAcceptableRadius = NAME_None;
	this->FindRelevantDangerInterval = 2.000000;
	this->UpdateTraverseStatesInterval = 0.100000;
	this->FailTaskOnUndodgeableDangerObject = false;
	this->IgnoreDangerObjects = false;
	this->_seenActorsMap = TMap<AActor*, bool>();
}
