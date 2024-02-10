#include "BTDecorator_HasPerk.h"

UBTDecorator_HasPerk::UBTDecorator_HasPerk()
{
	this->PlayerFilter = EPlayerFilter::Self;
	this->Perks = TArray<FAIHasPerkCondition>();
	this->_players = TArray<ADBDPlayer*>();
}
