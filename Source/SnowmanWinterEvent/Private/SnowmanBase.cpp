#include "SnowmanBase.h"
#include "Net/UnrealNetwork.h"
#include "SnowmanAttackableComponent.h"

void ASnowmanBase::OnRep_SpawnData()
{

}

void ASnowmanBase::OnRep_MaterialVariantIndex()
{

}

void ASnowmanBase::OnRep_IsHidden()
{

}

void ASnowmanBase::OnRep_IsAcquiredFromPool()
{

}

void ASnowmanBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASnowmanBase, _spawnData);
	DOREPLIFETIME(ASnowmanBase, _isAcquiredFromPool);
	DOREPLIFETIME(ASnowmanBase, _isHidden);
	DOREPLIFETIME(ASnowmanBase, _materialVariantIndex);
}

ASnowmanBase::ASnowmanBase()
{
	this->_snowmanAttackable = CreateDefaultSubobject<USnowmanAttackableComponent>(TEXT("SnowmanAttackable"));
	this->_isAcquiredFromPool = false;
	this->_isHidden = false;
	this->_materialVariantIndex = -1;
}
