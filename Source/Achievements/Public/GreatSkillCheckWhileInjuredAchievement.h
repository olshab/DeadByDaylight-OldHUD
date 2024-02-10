#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "GreatSkillCheckWhileInjuredAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UGreatSkillCheckWhileInjuredAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UGreatSkillCheckWhileInjuredAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UGreatSkillCheckWhileInjuredAchievement) { return 0; }
