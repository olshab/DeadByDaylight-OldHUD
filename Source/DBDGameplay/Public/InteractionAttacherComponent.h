#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "EInteractionOwnerType.h"
#include "InteractionAttacherComponent.generated.h"

class UInteractionDefinition;
class UChargeableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UInteractionAttacherComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_InteractionDefinitions, Transient, Export)
	TArray<UInteractionDefinition*> _interactionDefinitions;

	UPROPERTY(ReplicatedUsing=OnRep_ChargeableComponents, Transient, Export)
	TArray<UChargeableComponent*> _chargeableComponents;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _interactionDefinition;

	UPROPERTY(EditDefaultsOnly, Replicated)
	EInteractionOwnerType _restriction;

	UPROPERTY(EditDefaultsOnly)
	bool _useChargeableInteraction;

	UPROPERTY(EditDefaultsOnly)
	FName _chargeableComponentID;

	UPROPERTY(EditDefaultsOnly)
	FName _chargeableComponentName;

	UPROPERTY(EditDefaultsOnly, Replicated)
	FDBDTunableRowHandle _secondsToCharge;

	UPROPERTY(Replicated, Transient)
	bool _clientWaitForOwnerInitialization;

private:
	UFUNCTION()
	void OnRep_InteractionDefinitions();

	UFUNCTION()
	void OnRep_ChargeableComponents();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInteractionAttacherComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionAttacherComponent) { return 0; }
