#pragma once

#include "CoreMinimal.h"
#include "AITrackedEnemyData.generated.h"

class UAIEnemyTargetPrediction;

USTRUCT(BlueprintType)
struct FAITrackedEnemyData
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UAIEnemyTargetPrediction* EnemyTargetPrediction;

public:
	DBDBOTS_API FAITrackedEnemyData();
};

FORCEINLINE uint32 GetTypeHash(const FAITrackedEnemyData) { return 0; }
