#pragma once

#include "CoreMinimal.h"
#include "FootstepCreatorComponent.h"
#include "StatProperty.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "CamperFootstepCreatorComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCamperFootstepCreatorComponent : public UFootstepCreatorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _disallowFootstepsSpawnPerkFlags;

private:
	UPROPERTY(EditDefaultsOnly)
	FStatProperty _footstepIndicatorAngle;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _footstepIndicatorDecalSize;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _footstepIndicatorDurationAdditive;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _footstepIndicatorDurationMultiplictive;

protected:
	UFUNCTION()
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

public:
	UCamperFootstepCreatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperFootstepCreatorComponent) { return 0; }
