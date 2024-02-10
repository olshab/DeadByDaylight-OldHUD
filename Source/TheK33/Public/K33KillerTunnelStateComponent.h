#pragma once

#include "CoreMinimal.h"
#include "EK33KillerBlockCollisionType.h"
#include "DistanceCheckPawnLocationOverride.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "UObject/SoftObjectPtr.h"
#include "Templates/SubclassOf.h"
#include "K33KillerTunnelStateComponent.generated.h"

class UK33TunnelMovementInputAccelerationConstraintStrategyComponent;
class AActor;
class AK33ControlStationTunnelConnection;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33KillerTunnelStateComponent : public UActorComponent, public IDistanceCheckPawnLocationOverride
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsInTunnel)
	FTagStateBool _isInTunnel;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK33TunnelMovementInputAccelerationConstraintStrategyComponent> _movementInputConstraintStrategyClass;

	UPROPERTY(Transient, Export)
	UK33TunnelMovementInputAccelerationConstraintStrategyComponent* _movementInputConstraintStrategy;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<AActor>> _inTunnelUntouchedClasses;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<AK33ControlStationTunnelConnection> _controlStationTunnelConnectionClass;

	UPROPERTY(Transient)
	AK33ControlStationTunnelConnection* _controlStationTunnelConnectionInstance;

	UPROPERTY(EditDefaultsOnly)
	FName _killerCameraSocketName;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _accelerationMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _heightOffsetForDistanceChecks;

	UPROPERTY(EditDefaultsOnly)
	float _defaultOcclusionRefreshInterval;

	UPROPERTY(EditAnywhere)
	float _minAnimPitchInTunnel;

	UPROPERTY(ReplicatedUsing=OnRep_WorldElementsVisibility)
	bool _worldElementsVisibility;

	UPROPERTY(ReplicatedUsing=OnRep_TunnelElementsVisibility)
	bool _tunnelElementsVisibility;

	UPROPERTY(ReplicatedUsing=OnRep_KillerCollisionBlockType)
	EK33KillerBlockCollisionType _killerCollisionBlockType;

private:
	UFUNCTION()
	void OnRep_WorldElementsVisibility();

	UFUNCTION()
	void OnRep_TunnelElementsVisibility();

	UFUNCTION()
	void OnRep_KillerCollisionBlockType();

	UFUNCTION()
	void OnRep_IsInTunnel();

	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33KillerTunnelStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33KillerTunnelStateComponent) { return 0; }
