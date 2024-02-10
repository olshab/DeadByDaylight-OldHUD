#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction_GeneratorSecondaryInteraction.h"
#include "EAITerrorLevel.h"
#include "AISkill_Interaction_SetGeneratorTrap.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_SetGeneratorTrap : public UAISkill_Interaction_GeneratorSecondaryInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float MinGeneratorRepairPercentToSetTrap;

	UPROPERTY(EditAnywhere)
	EAITerrorLevel TerrorLevelToSetTrap;

	UPROPERTY(EditAnywhere)
	EAITerrorLevel TerrorLevelToSetTrapImmediately;

	UPROPERTY(EditAnywhere)
	float TerrorLevelCloseRange;

public:
	UAISkill_Interaction_SetGeneratorTrap();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_SetGeneratorTrap) { return 0; }
