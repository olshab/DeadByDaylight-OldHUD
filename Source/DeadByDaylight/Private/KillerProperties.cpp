#include "KillerProperties.h"

FKillerProperties::FKillerProperties()
{
	this->KillerAbility = EKillerAbilities::VE_None;
	this->SubstitutionElements = TArray<FGameplayElementSubstitutions>();
}
