#pragma once

#include "CoreMinimal.h"
#include "AISkillDynamicSubtreeStruct.generated.h"

class UBehaviorTree;
class UAISkill;

USTRUCT(BlueprintType)
struct FAISkillDynamicSubtreeStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TMap<UAISkill*, UBehaviorTree*> AISkillDynamicSubtreeMap;

	UPROPERTY(Transient)
	UBehaviorTree* ConnectingSubtree;

public:
	DBDBOTS_API FAISkillDynamicSubtreeStruct();
};

FORCEINLINE uint32 GetTypeHash(const FAISkillDynamicSubtreeStruct) { return 0; }
