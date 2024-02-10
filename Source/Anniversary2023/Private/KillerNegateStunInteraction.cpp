#include "KillerNegateStunInteraction.h"
#include "Net/UnrealNetwork.h"

class UStatusEffect;

void UKillerNegateStunInteraction::OnRep_StatusEffect(UStatusEffect* previousStatusEffect)
{

}

void UKillerNegateStunInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UKillerNegateStunInteraction, _negateStunStatusEffect);
}

UKillerNegateStunInteraction::UKillerNegateStunInteraction()
{
	this->_negateStunEffect = NULL;
	this->_negateStunEffectIconShow = NULL;
	this->_negateStunStatusEffect = NULL;
}
