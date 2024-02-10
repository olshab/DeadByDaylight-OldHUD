#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_PathfindingBatchExt.generated.h"

class UEnvQueryContext;

UCLASS()
class DBDBOTS_API UEnvQueryTest_PathfindingBatchExt : public UEnvQueryTest_Pathfinding
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue ScanRangeMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue BadPathingPenaltyMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue MaxPenaltyAngle;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue MinPenaltyAngle;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue HeightMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue PlayerLocationHeight;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnvQueryContext> TargetContext;

public:
	UEnvQueryTest_PathfindingBatchExt();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_PathfindingBatchExt) { return 0; }
