#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "KillerNegateStunInteraction.generated.h"

class ADBDPlayer;
class UStatusEffect;
class AInteractable;

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKillerNegateStunInteraction : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UStatusEffect> _negateStunEffect;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UStatusEffect> _negateStunEffectIconShow;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _negateStunPower;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _negateStunDuration;

private:
	UPROPERTY(ReplicatedUsing=OnRep_StatusEffect, Transient, Export)
	UStatusEffect* _negateStunStatusEffect;

private:
	UFUNCTION()
	void OnRep_StatusEffect(UStatusEffect* previousStatusEffect);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionUpdateStart(ADBDPlayer* interactingPlayer, AInteractable* interactable);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UKillerNegateStunInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UKillerNegateStunInteraction) { return 0; }
