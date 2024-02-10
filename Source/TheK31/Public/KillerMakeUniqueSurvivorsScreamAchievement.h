#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "KillerMakeUniqueSurvivorsScreamAchievement.generated.h"

class AActor;

UCLASS()
class UKillerMakeUniqueSurvivorsScreamAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TSet<AActor*> _alreadyProcessedSurvivors;

public:
	UKillerMakeUniqueSurvivorsScreamAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKillerMakeUniqueSurvivorsScreamAchievement) { return 0; }
