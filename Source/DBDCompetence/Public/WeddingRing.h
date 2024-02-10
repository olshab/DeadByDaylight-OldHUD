#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "WeddingRing.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UWeddingRing : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _increaseObsessionChanceStatusEffect;

public:
	UWeddingRing();
};

FORCEINLINE uint32 GetTypeHash(const UWeddingRing) { return 0; }
