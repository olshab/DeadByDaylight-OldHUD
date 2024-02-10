#include "S36P03.h"
#include "Net/UnrealNetwork.h"

void US36P03::OnRep_IsStatusEffectActiveOnOwningSurvivor()
{

}

float US36P03::GetPerkRange() const
{
	return 0.0f;
}

float US36P03::GetCooldownDurationAtLevel() const
{
	return 0.0f;
}

void US36P03::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US36P03, _isStatusEffectActiveOnOwningSurvivor);
}

US36P03::US36P03()
{
	this->_isStatusEffectActiveOnOwningSurvivor = false;
	this->_cooldownDuration = 180.000000;
	this->_perkRange = 1200.000000;
	this->_noScratchMarksEffectClass = NULL;
	this->_healersAffected = TArray<ACamperPlayer*>();
}
