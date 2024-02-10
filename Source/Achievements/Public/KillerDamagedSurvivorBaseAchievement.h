#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "KillerDamagedSurvivorBaseAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UKillerDamagedSurvivorBaseAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UKillerDamagedSurvivorBaseAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKillerDamagedSurvivorBaseAchievement) { return 0; }
