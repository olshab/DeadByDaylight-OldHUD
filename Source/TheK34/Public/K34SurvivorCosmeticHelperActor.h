#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "K34SurvivorCosmeticHelperActor.generated.h"

UCLASS()
class AK34SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

public:
	AK34SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK34SurvivorCosmeticHelperActor) { return 0; }
