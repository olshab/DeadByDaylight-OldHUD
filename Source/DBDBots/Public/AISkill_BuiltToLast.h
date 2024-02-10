#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "DataTableDropdown.h"
#include "AISkill_BuiltToLast.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_BuiltToLast : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FDataTableDropdown PerkID;

public:
	UAISkill_BuiltToLast();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_BuiltToLast) { return 0; }
