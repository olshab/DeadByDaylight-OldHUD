#include "K25UncontrolledProjectile.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void AK25UncontrolledProjectile::OnRep_TargetSurvivor()
{

}

void AK25UncontrolledProjectile::Authority_OnDownedSurvivorPickedUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void AK25UncontrolledProjectile::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

void AK25UncontrolledProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK25UncontrolledProjectile, _targetSurvivor);
}

AK25UncontrolledProjectile::AK25UncontrolledProjectile()
{
	this->_isAcquiredFromPool = false;
	this->_targetSurvivor = NULL;
}
