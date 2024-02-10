#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_ApproachLureableDangerObject.generated.h"

class UEnvQueryContext;

UCLASS(MinimalAPI)
class UEnvQueryTest_ApproachLureableDangerObject : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnvQueryContext> TargetContext;

	UPROPERTY(EditDefaultsOnly)
	float TowardDangerObjectMaxAngle;

public:
	UEnvQueryTest_ApproachLureableDangerObject();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_ApproachLureableDangerObject) { return 0; }
