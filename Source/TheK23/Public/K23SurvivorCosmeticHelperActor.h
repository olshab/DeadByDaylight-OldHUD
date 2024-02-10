#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "K23SurvivorCosmeticHelperActor.generated.h"

UCLASS()
class THEK23_API AK23SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_K23CamperHitByKnife(float lacerationPercentage);

public:
	AK23SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK23SurvivorCosmeticHelperActor) { return 0; }
