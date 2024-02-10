#include "GeneratorRepairInteraction.h"
#include "ESkillCheckCustomType.h"

class ADBDPlayer;
class AGenerator;

void UGeneratorRepairInteraction::SetIsObstructed(bool obstructed)
{

}

bool UGeneratorRepairInteraction::IsObstructed() const
{
	return false;
}

bool UGeneratorRepairInteraction::IsInteractionPossibleInternal(const ADBDPlayer* player) const
{
	return false;
}

bool UGeneratorRepairInteraction::IsBeingRepaired() const
{
	return false;
}

AGenerator* UGeneratorRepairInteraction::GetOwningGenerator() const
{
	return NULL;
}

float UGeneratorRepairInteraction::GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

void UGeneratorRepairInteraction::Authority_OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, ESkillCheckCustomType type)
{

}

UGeneratorRepairInteraction::UGeneratorRepairInteraction()
{

}
