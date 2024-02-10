#include "S35P03Effect.h"
#include "Net/UnrealNetwork.h"

void US35P03Effect::OnRep_GiveBuffToPlayer()
{

}

void US35P03Effect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US35P03Effect, _shouldGiveBuff);
	DOREPLIFETIME(US35P03Effect, _isStatusEffectGivenToSelf);
}

US35P03Effect::US35P03Effect()
{
	this->_shouldGiveBuff = false;
	this->_isStatusEffectGivenToSelf = false;
}
