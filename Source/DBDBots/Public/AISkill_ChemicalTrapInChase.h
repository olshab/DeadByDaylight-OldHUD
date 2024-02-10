#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AISkill_ChemicalTrapInChase.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_ChemicalTrapInChase : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UAISkill_ChemicalTrapInChase();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_ChemicalTrapInChase) { return 0; }
