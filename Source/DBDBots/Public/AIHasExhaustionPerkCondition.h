#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "AIHasExhaustionPerkCondition.generated.h"

USTRUCT()
struct FAIHasExhaustionPerkCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FDataTableDropdown PerkID;

public:
	DBDBOTS_API FAIHasExhaustionPerkCondition();
};

FORCEINLINE uint32 GetTypeHash(const FAIHasExhaustionPerkCondition) { return 0; }
