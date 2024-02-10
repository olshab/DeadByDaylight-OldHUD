#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_Basement.generated.h"

class UEnvQueryContext;

UCLASS(MinimalAPI)
class UEnvQueryTest_Basement : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue BasementBottomPenalty;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderBoolValue ApplyEnteringPenaltyIfAlreadyInside;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue EnteringBasementFixedPenalty;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderBoolValue Invert;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue BasementBoxExtentShrink;

public:
	UEnvQueryTest_Basement();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_Basement) { return 0; }
