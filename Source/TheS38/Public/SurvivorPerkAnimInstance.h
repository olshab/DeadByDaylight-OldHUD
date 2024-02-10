#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "SurvivorPerkAnimInstance.generated.h"

UCLASS(NonTransient)
class USurvivorPerkAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _tagsToTriggerAnimation;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsInPerkInteraction;

public:
	USurvivorPerkAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorPerkAnimInstance) { return 0; }
