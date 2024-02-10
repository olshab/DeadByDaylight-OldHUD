#pragma once

#include "CoreMinimal.h"
#include "WeightedWishedObjectData.generated.h"

class UAISkill_Find;

USTRUCT()
struct FWeightedWishedObjectData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float Weight;

	UPROPERTY()
	UAISkill_Find* SkillSource;

public:
	DBDBOTS_API FWeightedWishedObjectData();
};

FORCEINLINE uint32 GetTypeHash(const FWeightedWishedObjectData) { return 0; }
