#pragma once

#include "CoreMinimal.h"
#include "KillerDamagedSurvivorBaseAchievement.h"
#include "KillerDamagedSurvivorWithHasteAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UKillerDamagedSurvivorWithHasteAchievement : public UKillerDamagedSurvivorBaseAchievement
{
	GENERATED_BODY()

public:
	UKillerDamagedSurvivorWithHasteAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKillerDamagedSurvivorWithHasteAchievement) { return 0; }
