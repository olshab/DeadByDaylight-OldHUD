#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "GameplayTagContainer.h"
#include "BaseChainsawAttack.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UBaseChainsawAttack : public UPounceAttack
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _chainsawHitGameEventTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _chainsawAttemptGameEventTag;

public:
	UBaseChainsawAttack();
};

FORCEINLINE uint32 GetTypeHash(const UBaseChainsawAttack) { return 0; }
