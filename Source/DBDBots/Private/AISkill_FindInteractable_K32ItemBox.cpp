#include "AISkill_FindInteractable_K32ItemBox.h"

UAISkill_FindInteractable_K32ItemBox::UAISkill_FindInteractable_K32ItemBox()
{
	this->BBK32EmpTargetActor = TEXT("K32EmpTargetActor");
	this->BBOriginalFocusedActor = TEXT("K32OriginalFocusedActor");
	this->GoalClassesToGiveAdditionalWeight = TArray<TSubclassOf<AActor>>();
	this->EmpTargetNearGoalWeight = 30.000000;
	this->NearEmpBoxGoalWeight = 50.000000;
	this->NearEmpBoxDistance = 350.000000;
	this->K32EmpMaxCount = 1;
	this->K32ItemBoxChargeWeightRatio = 0.050000;
}
