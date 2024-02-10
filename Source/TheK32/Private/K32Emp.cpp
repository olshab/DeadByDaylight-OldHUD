#include "K32Emp.h"
#include "Net/UnrealNetwork.h"
#include "K32EmpInteraction.h"
#include "ChargeableComponent.h"

class ADBDPlayer;

void AK32Emp::SetComponentContextProviders()
{

}

void AK32Emp::OnRep_NumTargetsInRange()
{

}

void AK32Emp::OnRep_IsVisible(bool previousIsVisible)
{

}

void AK32Emp::OnRep_IsAcquiredFromPool()
{

}

void AK32Emp::OnEmpInteractionFinished(ADBDPlayer* interactingPlayer, bool hasInteractionStarted)
{

}

void AK32Emp::OnEmpInteractionEntered(ADBDPlayer* interactingPlayer)
{

}

void AK32Emp::Multicast_UseEmp_Implementation(const int32 numAffectedTargets, ADBDPlayer* interactingPlayer)
{

}

void AK32Emp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK32Emp, _numTargetsInRange);
	DOREPLIFETIME(AK32Emp, _isVisible);
	DOREPLIFETIME(AK32Emp, _isAcquiredFromPool);
}

AK32Emp::AK32Emp()
{
	this->_empInteraction = CreateDefaultSubobject<UK32EmpInteraction>(TEXT("EmpInteraction"));
	this->_empInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("EmpInteractionChargeable"));
	this->_revealToSurvivorStatusEffectClass = NULL;
	this->_authority_assimilatedSurvivorsInRange = TArray<ACamperPlayer*>();
	this->_authority_podsInRange = TArray<AK32KillerPod*>();
	this->_numTargetsInRange = 0;
	this->_isVisible = false;
	this->_isAcquiredFromPool = false;
	this->_revealToSurvivorStatusEffects = TMap<ADBDPlayer*, UStatusEffect*>();
	this->_previousCollector = NULL;
}
