#include "Addon_K27Power_18.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UAddon_K27Power_18::Authority_SpawnInVHSTape()
{

}

void UAddon_K27Power_18::Authority_OnSurvivorInsertVHS(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UAddon_K27Power_18::Authority_OnIntroCompleted()
{

}

UAddon_K27Power_18::UAddon_K27Power_18()
{
	this->_vhsCollectableBP = NULL;
	this->_revealTime = 0.000000;
	this->_revealAuraToKillerEffectClass = NULL;
	this->_revealAuraToKillerPerSurvivor = TMap<TWeakObjectPtr<ADBDPlayer>, UActivatableStatusEffect*>();
}
