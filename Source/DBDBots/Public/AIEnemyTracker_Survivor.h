#pragma once

#include "CoreMinimal.h"
#include "AIEnemyTracker.h"
#include "AIEnemyTracker_Survivor.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAIEnemyTracker_Survivor : public UAIEnemyTracker
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	float TerrorRadiusDistanceRange;

	UPROPERTY(EditInstanceOnly)
	float ChaseDistanceRange;

	UPROPERTY(EditInstanceOnly)
	float DownedAllyDistanceRange;

public:
	UAIEnemyTracker_Survivor();
};

FORCEINLINE uint32 GetTypeHash(const UAIEnemyTracker_Survivor) { return 0; }
