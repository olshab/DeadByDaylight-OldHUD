#include "TrapChemicalBomb.h"
#include "Net/UnrealNetwork.h"
#include "ETrapBombState.h"

class ADBDPlayer;
class APallet;

void ATrapChemicalBomb::OnRep_CurrentState()
{

}

ADBDPlayer* ATrapChemicalBomb::GetTrapPlacer() const
{
	return NULL;
}

ETrapBombState ATrapChemicalBomb::GetState() const
{
	return ETrapBombState::Idle;
}

APallet* ATrapChemicalBomb::GetPallet() const
{
	return NULL;
}

void ATrapChemicalBomb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATrapChemicalBomb, _currentState);
}

ATrapChemicalBomb::ATrapChemicalBomb()
{
	this->_currentState = ETrapBombState::Idle;
	this->_trapPlacer = NULL;
	this->_placedPallet = NULL;
}
