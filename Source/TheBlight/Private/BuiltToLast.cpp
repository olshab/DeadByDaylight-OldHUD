#include "BuiltToLast.h"
#include "Net/UnrealNetwork.h"

float UBuiltToLast::GetRefillPercentageByLevel() const
{
	return 0.0f;
}

float UBuiltToLast::GetHideDurationByLevel() const
{
	return 0.0f;
}

void UBuiltToLast::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBuiltToLast, _numberOfTimesPerkTriggered);
}

UBuiltToLast::UBuiltToLast()
{
	this->_refillPercentage = 0.000000;
	this->_hideDuration = 0.000000;
	this->_numberOfTimesPerkTriggered = 0;
}
