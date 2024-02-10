#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "PerkIdDropdown.h"
#include "AISkill_Interaction_GeneratorSecondaryInteraction.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_GeneratorSecondaryInteraction : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FPerkIdDropdown> Perks;

	UPROPERTY(EditAnywhere)
	TArray<FName> GeneratorSecondaryInteractionIds;

public:
	UAISkill_Interaction_GeneratorSecondaryInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_GeneratorSecondaryInteraction) { return 0; }
