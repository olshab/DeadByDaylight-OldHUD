#pragma once

#include "CoreMinimal.h"
#include "AISkill_Find.h"
#include "AISkill_Find_VoidWorldHaunt.generated.h"

UCLASS(EditInlineNew)
class UAISkill_Find_VoidWorldHaunt : public UAISkill_Find
{
	GENERATED_BODY()

public:
	UAISkill_Find_VoidWorldHaunt();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Find_VoidWorldHaunt) { return 0; }
