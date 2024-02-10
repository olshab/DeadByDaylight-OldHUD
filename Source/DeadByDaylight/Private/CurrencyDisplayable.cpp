#include "CurrencyDisplayable.h"
#include "DBDSkeletalMeshComponentBudgeted.h"

void ACurrencyDisplayable::BeginDestroySequence_Internal_Implementation()
{

}

ACurrencyDisplayable::ACurrencyDisplayable()
{
	this->SkeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("CurrencySkeletalMeshComponent"));
	this->_currencyMeshes = TMap<ECurrencyType, USkeletalMesh*>();
}
