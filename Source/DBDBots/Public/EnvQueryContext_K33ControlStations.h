#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_K33ControlStations.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UEnvQueryContext_K33ControlStations : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_K33ControlStations();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_K33ControlStations) { return 0; }
