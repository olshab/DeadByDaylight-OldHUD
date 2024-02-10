#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ObjectStateProvider.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "CoreMemoryFragment.generated.h"

class UCoreMemoryFragmentComponent;
class UStaticMeshComponent;
class UCoreMemoryFragmentFXComponent;
class UDBDOutlineComponent;
class USphereComponent;
class UActivatorComponent;
class UGameplayTagContainerComponent;

UCLASS(Abstract)
class ACoreMemoryFragment : public AActor, public IObjectStateProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _coreMemoryFragmentStaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _coreMemoryTendrilStaticMesh;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UCoreMemoryFragmentComponent* _coreMemoryFragmentComponent;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UCoreMemoryFragmentFXComponent* _coreMemoryFragmentFXComponent;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	USphereComponent* _coreMemoryFragmentTriggerZone;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	USphereComponent* _coreMemoryFragmentCollectionZone;

	UPROPERTY(ReplicatedUsing=OnRep_SpawnLocation)
	FVector _spawnLocation;

	UPROPERTY(ReplicatedUsing=OnRep_SpawnRotation)
	FRotator _spawnRotation;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _triggerZoneRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _collectionZoneRadius;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _outlineColour;

	UPROPERTY(VisibleAnywhere, Export)
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(Export)
	UGameplayTagContainerComponent* _objectState;

	UPROPERTY(VisibleAnywhere, Export)
	UActivatorComponent* _activator;

private:
	UFUNCTION()
	void OnRep_SpawnRotation(const FRotator& rotation);

	UFUNCTION()
	void OnRep_SpawnLocation(const FVector& location);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ACoreMemoryFragment();
};

FORCEINLINE uint32 GetTypeHash(const ACoreMemoryFragment) { return 0; }
