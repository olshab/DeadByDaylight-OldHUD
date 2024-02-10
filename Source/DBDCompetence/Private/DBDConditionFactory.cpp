#include "DBDConditionFactory.h"
#include "UObject/ScriptInterface.h"
#include "GameplayTagContainer.h"

class UPerk;
class IConditionReceiver;
class UTimerObject;
class UIsPlayerPerformingInteraction;
class UTimerElapsedCondition;
class UDoesPerkHaveToken;

UIsPlayerPerformingInteraction* UDBDConditionFactory::IsPlayerPerformingInteraction(TScriptInterface<IConditionReceiver> conditionReceiver, const FGameplayTagContainer& interactionSemantics)
{
	return NULL;
}

UTimerElapsedCondition* UDBDConditionFactory::HasTimerElapsedWhileConditionWasTrue(TScriptInterface<IConditionReceiver> conditionReceiver, UTimerObject* timer)
{
	return NULL;
}

UDoesPerkHaveToken* UDBDConditionFactory::DoesPerkHaveToken(TScriptInterface<IConditionReceiver> conditionReceiver, UPerk* perk)
{
	return NULL;
}

UDBDConditionFactory::UDBDConditionFactory()
{

}
