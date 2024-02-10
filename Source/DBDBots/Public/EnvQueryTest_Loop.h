#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "AITunableParameter.h"
#include "EnvQueryTest_Loop.generated.h"

class UEnvQueryContext;

UCLASS(MinimalAPI)
class UEnvQueryTest_Loop : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditDefaultsOnly)
	FAIDataProviderFloatValue TowardLoopAngle;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MinSafetyRatingAgainstMeleeHostileStimulus;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MinSafetyRatingAgainstRangedHostileStimulus;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter ExtraMinSafetyRatingAgainstFastVaultHostileStimulus;

public:
	UEnvQueryTest_Loop();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_Loop) { return 0; }
