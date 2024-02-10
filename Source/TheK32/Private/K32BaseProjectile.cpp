#include "K32BaseProjectile.h"
#include "Net/UnrealNetwork.h"

void AK32BaseProjectile::OnRep_IsAcquiredFromPool(bool oldIsAcquiredFromPool)
{

}

void AK32BaseProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK32BaseProjectile, _isAcquiredFromPool);
}

AK32BaseProjectile::AK32BaseProjectile()
{
	this->_isAcquiredFromPool = false;
}
