#pragma once

#include "CoreMinimal.h"
#include "SearchChestInteractionBase.h"
#include "GameplayTagContainer.h"
#include "OpenChestInteraction.generated.h"

class UAnimSequence;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UOpenChestInteraction : public USearchChestInteractionBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _camperSearchablePercentTag;

	UPROPERTY(EditDefaultsOnly)
	UAnimSequence* _successExitTimeAnimSequenceReference;

	UPROPERTY(Transient)
	float _startTime;

public:
	UOpenChestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOpenChestInteraction) { return 0; }
