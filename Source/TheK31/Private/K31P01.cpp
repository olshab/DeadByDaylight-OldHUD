#include "K31P01.h"
#include "Net/UnrealNetwork.h"

float UK31P01::GetHasteEffectMovementSpeedIncrease() const
{
	return 0.0f;
}

float UK31P01::GetHasteEffectDurationAtLevel() const
{
	return 0.0f;
}

void UK31P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31P01, _isPerkActive);
}

UK31P01::UK31P01()
{
	this->_hasteEffectMovementSpeedIncrease = 0.050000;
	this->_hasteEffectDurationSeconds = 5.000000;
	this->_authority_hasteStatusEffect = NULL;
	this->_hasteEffectClass = NULL;
	this->_isPerkActive = false;
}
