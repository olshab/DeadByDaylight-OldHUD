#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "InjectSerumInteraction.generated.h"

class UStatusEffect;
class ASlasherPlayer;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInjectSerumInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _killerInstinctStatusEffectClass;

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _injectSerumKillerInstinctTime;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _scoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _serumApplyHeal;

private:
	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetInjectionTarget() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_CureSurvivor(ACamperPlayer* camperPlayer);

public:
	UInjectSerumInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UInjectSerumInteraction) { return 0; }
