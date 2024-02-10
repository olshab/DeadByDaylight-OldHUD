#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_FriendlyDangerObjects.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UEnvQueryContext_FriendlyDangerObjects : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_FriendlyDangerObjects();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_FriendlyDangerObjects) { return 0; }
