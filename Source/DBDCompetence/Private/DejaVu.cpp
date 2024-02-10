#include "DejaVu.h"
#include "Net/UnrealNetwork.h"

void UDejaVu::OnRep_RevealedGenerators()
{

}

void UDejaVu::LevelReadyToRevealOutlineGenerators()
{

}

float UDejaVu::GetActionSpeedsAtLevel() const
{
	return 0.0f;
}

void UDejaVu::Authority_SetNewGeneratorsToReveal()
{

}

void UDejaVu::Authority_OnGeneratorRepaired(int32 activatedGeneratorCount)
{

}

void UDejaVu::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDejaVu, _revealedGenerators);
}

UDejaVu::UDejaVu()
{
	this->_numGeneratorsToReveal = 3;
	this->_actionSpeeds = 0.000000;
	this->_revealedGenerators = TArray<AGenerator*>();
}
