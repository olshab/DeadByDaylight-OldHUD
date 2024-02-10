#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "S36P03Effect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API US36P03Effect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_GiveBuffToPlayer)
	bool _shouldGiveBuff;

	UPROPERTY(Replicated)
	bool _isStatusEffectGivenToSelf;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldGiveBuff() const;

private:
	UFUNCTION()
	void OnRep_GiveBuffToPlayer();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US36P03Effect();
};

FORCEINLINE uint32 GetTypeHash(const US36P03Effect) { return 0; }
