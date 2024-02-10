#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_IsInDangerObjectRange.generated.h"

class UEnvQueryContext;

UCLASS(MinimalAPI)
class UEnvQueryTest_IsInDangerObjectRange : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderBoolValue Invert;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderBoolValue MustHaveDangerVision;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderBoolValue CheckIfAnyBodyPartInDangerArea;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderBoolValue UseCrouchHeight;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue SurvivorStandHeight;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue SurvivorCrouchHeight;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue SurvivorRadius;

public:
	UEnvQueryTest_IsInDangerObjectRange();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_IsInDangerObjectRange) { return 0; }
