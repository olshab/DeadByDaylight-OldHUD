#include "BTService_FindObject_K32EmpTarget.h"

UBTService_FindObject_K32EmpTarget::UBTService_FindObject_K32EmpTarget()
{
	this->ValidGoalObjectClasses = TArray<TSubclassOf<AActor>>();
	this->NearGoalPodHorizontalDistance = 2000.000000;
	this->NearGoalPodVerticalDistance = 1000.000000;
	this->NearGoalSurvivorHorizontalDistance = 500.000000;
	this->NearGoalSurvivorVerticalDistance = 200.000000;
	this->OtherSurvivorNearTargetDistance = 1000.000000;
	this->CheckDynamicSubtreeInterval = 1.500000;
}
