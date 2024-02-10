#include "K33HuskAnimInstance.h"

class USkeletalMeshComponent;
class UCustomizedSkeletalMesh;

USkeletalMeshComponent* UK33HuskAnimInstance::GetCopiedSkeletalMesh() const
{
	return NULL;
}

UCustomizedSkeletalMesh* UK33HuskAnimInstance::GetCopiedCustomizedSkeletalMesh() const
{
	return NULL;
}

UK33HuskAnimInstance::UK33HuskAnimInstance()
{
	this->_isFPV = false;
	this->_cameraPitchValue = 0.000000;
}
