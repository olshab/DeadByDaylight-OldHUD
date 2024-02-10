#include "Saboteur.h"
#include "UObject/NoExportTypes.h"

FLinearColor USaboteur::GetScourgeHooksAuraColour() const
{
	return FLinearColor{};
}

float USaboteur::GetRevealHookDistanceAtLevel() const
{
	return 0.0f;
}

float USaboteur::GetCooldownDurationAtLevel() const
{
	return 0.0f;
}

USaboteur::USaboteur()
{
	this->_cooldownDuration = 0.000000;
	this->_revealHookDistance = 0.000000;
	this->_saboteurEffect = NULL;
	this->_revealedMeatHooksOultineStrategy = TArray<UMeatHookOutlineUpdateStrategy*>();
}
