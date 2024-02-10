#include "HarpoonProp.h"
#include "DBDSkeletalMeshComponentBudgeted.h"

AHarpoonProp::AHarpoonProp()
{
	this->_skeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponent"));
}
