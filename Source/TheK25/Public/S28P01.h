#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S28P01.generated.h"

class US28P01AuraReveal;
class ADBDPlayer;
class UChargeableComponent;
class UInteractionAttacherComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class US28P01 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _auraRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	float _auraRevealRange;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<US28P01AuraReveal> _S28P01InteractionClass;

	UPROPERTY(Transient, Export)
	UChargeableComponent* _S28P01ChargeableComponent;

	UPROPERTY(Transient, Export)
	US28P01AuraReveal* _S28P01Interaction;

	UPROPERTY(ReplicatedUsing=OnRep_IsPerkActive, Transient)
	bool _isPerkActive;

	UPROPERTY(ReplicatedUsing=OnRep_InteractionAttacherComponent, Transient, Export)
	UInteractionAttacherComponent* _interactionAttacherComponent;

	UPROPERTY(Transient)
	ADBDPlayer* _playerOwner;

private:
	UFUNCTION()
	void OnRep_IsPerkActive() const;

	UFUNCTION()
	void OnRep_InteractionAttacherComponent();

	UFUNCTION()
	void OnInteractionChargeChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);

	UFUNCTION(BlueprintPure)
	float GetAuraRevealRange() const;

	UFUNCTION(BlueprintPure)
	float GetAuraRevealDuration() const;

	UFUNCTION()
	void Authority_OnS28P01InteractionStart(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US28P01();
};

FORCEINLINE uint32 GetTypeHash(const US28P01) { return 0; }
