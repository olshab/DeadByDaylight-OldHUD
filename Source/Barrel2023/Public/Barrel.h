#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "EBarrelType.h"
#include "UObject/NoExportTypes.h"
#include "Barrel.generated.h"

class UPrimitiveComponent;
class UBarrelInteraction;
class ADBDPlayer;
class UDBDOutlineComponent;
class UInteractor;
class UChargeableComponent;
class UStaticMeshComponent;

UCLASS()
class BARREL2023_API ABarrel : public ARespawnableInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBarrelInteraction* _barrelInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBarrelInteraction* _barrelInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _barrelInteractionChargeable;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _barrelInteractionChargeableKiller;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _barrelInteractionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _barrelInteractor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _barrelStaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _extractorStaticMesh;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _barrelInteractionSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _barrelInteractionSecondsToChargeKiller;

	UPROPERTY(EditAnywhere, NoClear)
	EBarrelType _barrelType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _scoreTag;

	UPROPERTY(ReplicatedUsing=OnRep_OnLocationChanged, Transient)
	FVector _barrelLocation;

public:
	UFUNCTION(BlueprintCallable)
	void SetDissolveStarted(bool isDissolveStarted);

private:
	UFUNCTION()
	void OnRep_OnLocationChanged();

protected:
	UFUNCTION(BlueprintCallable)
	void OnBarrelDespawnCosmeticsComplete();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionInterruptedByPlayer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFirstBarrelSpawn();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnBarrelRespawn();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnBarrelDespawn(bool wasInteractionCompleted);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABarrel();
};

FORCEINLINE uint32 GetTypeHash(const ABarrel) { return 0; }
