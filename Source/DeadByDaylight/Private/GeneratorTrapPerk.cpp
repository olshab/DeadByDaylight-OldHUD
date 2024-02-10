#include "GeneratorTrapPerk.h"
#include "GameEventData.h"
#include "ETrapRemovedReason.h"
#include "GameplayTagContainer.h"

class AGenerator;

float UGeneratorTrapPerk::GetGeneratorTrapDuration() const
{
	return 0.0f;
}

void UGeneratorTrapPerk::Client_OnTrapDestroyed_Implementation(const AGenerator* generator, const ETrapRemovedReason reason)
{

}

void UGeneratorTrapPerk::Client_OnTrapActivated_Implementation(const AGenerator* generator)
{

}

void UGeneratorTrapPerk::Authority_OnGeneratorCompleted(bool isAutoCompleted)
{

}

void UGeneratorTrapPerk::Authority_OnExitGatesPowered(const FGameplayTag gameEventTag, const FGameEventData& gameEventData)
{

}

UGeneratorTrapPerk::UGeneratorTrapPerk()
{

}
