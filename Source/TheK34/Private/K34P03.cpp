#include "K34P03.h"
#include "Net/UnrealNetwork.h"

bool UK34P03::HasAnyGeneratorsInRange() const
{
	return false;
}

void UK34P03::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK34P03, _hasAnyGeneratorsInRange);
}

UK34P03::UK34P03()
{
	this->_generatorRangeFromPlayer = 1600.000000;
	this->_hasAnyGeneratorsInRange = false;
	this->_hasteEffectClass = NULL;
	this->_hasteEffect = NULL;
	this->_hasteEffectAmount = 0.050000;
	this->_hasteLingerTimes = 0.000000;
	this->_disablePerkWhenExitGatesArePowered = false;
}
