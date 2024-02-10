#include "CamperFootstepCreatorComponent.h"
#include "UObject/NoExportTypes.h"

class AActor;

void UCamperFootstepCreatorComponent::OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise)
{

}

UCamperFootstepCreatorComponent::UCamperFootstepCreatorComponent()
{
	this->_disallowFootstepsSpawnPerkFlags = TArray<FGameplayTag>();
}
