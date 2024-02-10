#include "S36P03Effect.h"
#include "Net/UnrealNetwork.h"

bool US36P03Effect::ShouldGiveBuff() const
{
	return false;
}

void US36P03Effect::OnRep_GiveBuffToPlayer()
{

}

void US36P03Effect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US36P03Effect, _shouldGiveBuff);
	DOREPLIFETIME(US36P03Effect, _isStatusEffectGivenToSelf);
}

US36P03Effect::US36P03Effect()
{
	this->_shouldGiveBuff = false;
	this->_isStatusEffectGivenToSelf = false;
}
