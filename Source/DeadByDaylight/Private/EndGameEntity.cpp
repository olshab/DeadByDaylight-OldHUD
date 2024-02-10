#include "EndGameEntity.h"
#include "DBDSkeletalMeshComponentBudgeted.h"

AEndGameEntity::AEndGameEntity()
{
	this->_skeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("Mesh"));
}
