#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_IncompleteGenerators.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UEnvQueryContext_IncompleteGenerators : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_IncompleteGenerators();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_IncompleteGenerators) { return 0; }
