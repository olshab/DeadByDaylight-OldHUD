#include "K29KillerVaultInteractionDefinition.h"

class AActor;
class ACamperPlayer;
class ADBDPlayer;

bool UK29KillerVaultInteractionDefinition::IsVaultingToLeftSide(AActor* killer) const
{
	return false;
}

TArray<ACamperPlayer*> UK29KillerVaultInteractionDefinition::GetOverlappingSurvivorsOnSide(bool isUsingLeftSide) const
{
	return TArray<ACamperPlayer*>();
}

ACamperPlayer* UK29KillerVaultInteractionDefinition::GetClosestSurvivorToPalletFromOverlap(const ADBDPlayer* player, const TArray<ACamperPlayer*>& survivorsOnSide) const
{
	return NULL;
}

UK29KillerVaultInteractionDefinition::UK29KillerVaultInteractionDefinition()
{

}
