#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "PerkIdDropdown.h"
#include "AISkill_Interaction_RecoverWhileCrawling.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_RecoverWhileCrawling : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FPerkIdDropdown> Perks;

public:
	UAISkill_Interaction_RecoverWhileCrawling();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_RecoverWhileCrawling) { return 0; }
