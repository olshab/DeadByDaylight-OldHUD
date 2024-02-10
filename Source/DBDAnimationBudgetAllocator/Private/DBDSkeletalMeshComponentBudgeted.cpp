#include "DBDSkeletalMeshComponentBudgeted.h"

class USkeletalMeshComponent;

void UDBDSkeletalMeshComponentBudgeted::SetAnimationDependency(USkeletalMeshComponent* meshDependency)
{

}

UDBDSkeletalMeshComponentBudgeted::UDBDSkeletalMeshComponentBudgeted() : USkeletalMeshComponentBudgeted(FObjectInitializer::Get())
{
	this->_autoRegisterToAnimBudgeter = true;
	this->_autoComputeSignificance = true;
	this->_significanceStrategy = NULL;
	this->_animBudgeterSignificanceStrategy = NULL;
}
