#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AISkill_Find.h"
#include "AISkill_Find_StandardWorldHaunt.generated.h"

UCLASS(EditInlineNew)
class UAISkill_Find_StandardWorldHaunt : public UAISkill_Find
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FName BBIsFleeing;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MaxDistanceWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter HauntDistanceToReachMaxDistanceWeightIfFleeing;

public:
	UAISkill_Find_StandardWorldHaunt();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Find_StandardWorldHaunt) { return 0; }
