#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "AISkill_InsideSnowman.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InsideSnowman : public UAISkill
{
	GENERATED_BODY()

public:
	UAISkill_InsideSnowman();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InsideSnowman) { return 0; }
