#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacerComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "K33TurretPlacer.generated.h"

class UStaticMeshComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TurretPlacer : public UObjectPlacerComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStaticMeshComponent> _turretVisualPlacementStaticMeshComponentClass;

	UPROPERTY(ReplicatedUsing=OnRep_ReplicatedIsPlacementValid)
	bool _replicatedIsPlacementValid;

	UPROPERTY(Replicated)
	FVector _replicatedPlacementLocation;

	UPROPERTY(Transient, Export)
	UStaticMeshComponent* _turretStaticMesh;

	UPROPERTY(Transient)
	TArray<FVector> _otherTurretsDropOffLocations;

	UPROPERTY(EditDefaultsOnly)
	float _turretMeshLerpSpeed;

private:
	UFUNCTION()
	void OnRep_ReplicatedIsPlacementValid();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33TurretPlacer();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretPlacer) { return 0; }
