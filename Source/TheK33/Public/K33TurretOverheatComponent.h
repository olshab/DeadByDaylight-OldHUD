#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K33TurretOverheatComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TurretOverheatComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_CurrentHeatAmount)
	float _currentHeatAmount;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _turretHeatAccumulationRate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _turretHeatDissipationRate;

private:
	UFUNCTION()
	void OnRep_CurrentHeatAmount();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33TurretOverheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretOverheatComponent) { return 0; }
