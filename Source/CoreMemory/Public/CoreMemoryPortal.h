#pragma once

#include "CoreMinimal.h"
#include "SpecialBehaviourInteractable.h"
#include "DBDTunableRowHandle.h"
#include "CoreMemoryPortal.generated.h"

class UCoreMemoryPortalComponent;
class UChargeableComponent;
class UInteractor;
class USynchronizeCoreMemoryInteraction;
class UStaticMeshComponent;
class ADBDPlayer;
class UCoreMemoryPortalFXComponent;
class UPrimitiveComponent;

UCLASS()
class ACoreMemoryPortal : public ASpecialBehaviourInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _coreMemoryPortalStaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCoreMemoryPortalComponent* _coreMemoryPortalComponent;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UCoreMemoryPortalFXComponent* _coreMemoryPortalFXComponent;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UInteractor* _synchronizeCoreMemoryInteractor;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	USynchronizeCoreMemoryInteraction* _synchronizeCoreMemoryInteraction;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	USynchronizeCoreMemoryInteraction* _synchronizeCoreMemoryInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _synchronizeCoreMemoryInteractionChargeable;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _synchronizeCoreMemoryInteractionChargeableKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UPrimitiveComponent* _synchronizeCoreMemoryInteractionZone;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _synchronizeCoreMemoryInteractionSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _synchronizeCoreMemoryInteractionSecondsToChargeKiller;

private:
	UFUNCTION()
	void OnInteractionStarted(ADBDPlayer* player);

public:
	ACoreMemoryPortal();
};

FORCEINLINE uint32 GetTypeHash(const ACoreMemoryPortal) { return 0; }
