#include "PlayerVoidEnergy.h"
#include "EVoidEnergyType.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UPlayerVoidEnergy::OnRep_TotalVoidEnergySpent(int32 previousTotalVoidEnergySpent)
{

}

void UPlayerVoidEnergy::OnRep_CurrentVoidEnergy(int32 previousEnergyCount)
{

}

void UPlayerVoidEnergy::OnLocallyObservedChanged(ADBDPlayer* player)
{

}

void UPlayerVoidEnergy::OnLocallyControlledChanged(bool isLocallyControlled)
{

}

void UPlayerVoidEnergy::Multicast_ShowVoidEnergyChanges_Implementation(const int32 previousVoidEnergyCount, const int32 newVoidEnergyCount)
{

}

void UPlayerVoidEnergy::Multicast_AddVoidEnergy_Implementation(const int32 amountToAdd, const EVoidEnergyType voidEnergyType)
{

}

int32 UPlayerVoidEnergy::GetTotalVoidEnergyDeposited() const
{
	return 0;
}

int32 UPlayerVoidEnergy::GetMaxAmountOfVoidEnergyCanReceive() const
{
	return 0;
}

int32 UPlayerVoidEnergy::GetCurrentVoidEnergyCount() const
{
	return 0;
}

void UPlayerVoidEnergy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPlayerVoidEnergy, _reasonLastVoidEnergyChangeOccurred);
	DOREPLIFETIME(UPlayerVoidEnergy, _currentVoidEnergy);
	DOREPLIFETIME(UPlayerVoidEnergy, _totalVoidEnergySpent);
}

UPlayerVoidEnergy::UPlayerVoidEnergy()
{
	this->_reasonLastVoidEnergyChangeOccurred = EVoidEnergyChangeReason::None;
	this->_currentVoidEnergy = 0;
	this->_totalVoidEnergySpent = 0;
	this->_voidEnergyLevelsToStartNextTier = TArray<FDBDTunableRowHandle>();
	this->_hasteValueTiers = TArray<FDBDTunableRowHandle>();
	this->_hasteStatusEffect = NULL;
	this->_voidEnergyOrbSpawnerClass = NULL;
	this->_scoreEventTiers = TArray<FGameplayTag>();
	this->_scoreEventTiersWithoutOffering = TArray<FGameplayTag>();
}
