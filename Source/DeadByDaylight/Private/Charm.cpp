#include "Charm.h"
#include "DBDSkeletalMeshComponentBudgeted.h"

void ACharm::BeginDestroySequence_Internal_Implementation()
{

}

ACharm::ACharm()
{
	this->_skeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("CharmSkeletalMeshComponent"));
	this->_actorVfx = NULL;
}
