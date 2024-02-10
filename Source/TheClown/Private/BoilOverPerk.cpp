#include "BoilOverPerk.h"

class ADBDPlayer;

float UBoilOverPerk::GetGreatHeightsValue() const
{
	return 0.0f;
}

float UBoilOverPerk::GetAdditionnalWigglingProgressAtLevel() const
{
	return 0.0f;
}

void UBoilOverPerk::Authority_OnWiggleEnd()
{

}

void UBoilOverPerk::Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker)
{

}

UBoilOverPerk::UBoilOverPerk()
{
	this->_effectsToSpawn = TArray<FStatusEffectSpawnData>();
	this->_additionnalWigglingProgressWhenFalling = 0.000000;
	this->_greatHeightsValue = 100.000000;
}
