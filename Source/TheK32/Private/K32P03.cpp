#include "K32P03.h"
#include "Net/UnrealNetwork.h"

void UK32P03::OnRep_CompromisedGenerator()
{

}

float UK32P03::GetStatusEffectDurationAtLevel() const
{
	return 0.0f;
}

float UK32P03::GetHastePercent() const
{
	return 0.0f;
}

void UK32P03::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK32P03, _generatorsDamaged);
	DOREPLIFETIME(UK32P03, _compromisedGenerator);
}

UK32P03::UK32P03()
{
	this->_undetectableStatusEffect = NULL;
	this->_hasteStatusEffect = NULL;
	this->_statusEffectDuration = 0.000000;
	this->_generatorsDamagedRequired = 0;
	this->_hastePercent = 0.000000;
	this->_generatorsDamaged = 0.000000;
	this->_compromisedGenerator = NULL;
	this->_lastCompromisedGenerator = NULL;
}
