#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "Snowpile.generated.h"

class UChargeableComponent;
class UInteractor;
class UStaticMeshComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class USnowpileInteraction;

UCLASS()
class WINTEREVENT2023_API ASnowpile : public AInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UStaticMeshComponent* _snowpileStaticMesh;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UPrimitiveComponent* _snowpileInteractionZone;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UInteractor* _snowpileInteractor;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	USnowpileInteraction* _snowpileInteractionSurvivor;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	USnowpileInteraction* _snowpileInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _snowpileInteractionChargeableSurvivor;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _snowpileInteractionChargeableKiller;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snowpileInteractionSecondsToChargeSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snowpileInteractionSecondsToChargeKiller;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCancelled(ADBDPlayer* interactingPlayer);

public:
	ASnowpile();
};

FORCEINLINE uint32 GetTypeHash(const ASnowpile) { return 0; }
