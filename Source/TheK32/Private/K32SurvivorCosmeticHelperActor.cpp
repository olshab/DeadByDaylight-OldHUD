#include "K32SurvivorCosmeticHelperActor.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "UObject/NoExportTypes.h"

void AK32SurvivorCosmeticHelperActor::OnKillerNoLongerLocksOnToSurvivor(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void AK32SurvivorCosmeticHelperActor::OnKillerLocksOnToSurvivor(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

FVector AK32SurvivorCosmeticHelperActor::GetNoseLocation()
{
	return FVector{};
}

AK32SurvivorCosmeticHelperActor::AK32SurvivorCosmeticHelperActor()
{
	this->_noseJointName = TEXT("nose");
}
