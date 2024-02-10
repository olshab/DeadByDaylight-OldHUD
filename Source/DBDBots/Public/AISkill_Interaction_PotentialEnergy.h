#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction_GeneratorSecondaryInteraction.h"
#include "AISkill_Interaction_PotentialEnergy.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_PotentialEnergy : public UAISkill_Interaction_GeneratorSecondaryInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float DangerousGeneratorsRatio;

	UPROPERTY(EditAnywhere)
	float SafeGeneratorsRatio;

	UPROPERTY(EditAnywhere)
	float MaxGeneratorRepairPercentToUseTokens;

public:
	UAISkill_Interaction_PotentialEnergy();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_PotentialEnergy) { return 0; }
