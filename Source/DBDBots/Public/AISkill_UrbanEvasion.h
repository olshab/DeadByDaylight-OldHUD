#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "AISkill_UrbanEvasion.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_UrbanEvasion : public UAISkill
{
	GENERATED_BODY()

public:
	UAISkill_UrbanEvasion();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_UrbanEvasion) { return 0; }
