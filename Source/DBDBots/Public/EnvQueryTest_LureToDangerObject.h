#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_LureToDangerObject.generated.h"

class UEnvQueryContext;

UCLASS(MinimalAPI)
class UEnvQueryTest_LureToDangerObject : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnvQueryContext> TargetContext;

public:
	UEnvQueryTest_LureToDangerObject();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_LureToDangerObject) { return 0; }
