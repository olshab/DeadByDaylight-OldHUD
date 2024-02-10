#include "S35P03.h"
#include "Net/UnrealNetwork.h"

void US35P03::OnRep_IsStatusEffectActiveOnOwningSurvivor()
{

}

float US35P03::GetPerkRange() const
{
	return 0.0f;
}

float US35P03::GetCooldownDurationAtLevel() const
{
	return 0.0f;
}

void US35P03::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US35P03, _isStatusEffectActiveOnOwningSurvivor);
}

US35P03::US35P03()
{
	this->_isStatusEffectActiveOnOwningSurvivor = false;
	this->_cooldownDuration = 180.000000;
	this->_speedBoost = 0.050000;
	this->_perkRange = 1200.000000;
	this->_hasteEffectClass = NULL;
	this->_healedSurvivorsAffected = TArray<ACamperPlayer*>();
}
