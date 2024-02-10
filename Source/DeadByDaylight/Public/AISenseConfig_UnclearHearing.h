#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "AISenseConfig_UnclearHearing.generated.h"

class UAISense_UnclearHearing;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_UnclearHearing : public UAISenseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, NoClear)
	TSubclassOf<UAISense_UnclearHearing> Implementation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float HearingRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FAITunableParameter NoiseRangeMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FAITunableParameter ReactionTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FAISenseAffiliationFilter DetectionByAffiliation;

public:
	UAISenseConfig_UnclearHearing();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseConfig_UnclearHearing) { return 0; }
