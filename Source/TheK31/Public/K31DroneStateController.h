#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneTimestampedState.h"
#include "Templates/SubclassOf.h"
#include "EK31DroneStateID.h"
#include "K31DroneStateController.generated.h"

class UK31DroneState;
class AGameStateBase;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneStateController : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChangedBlueprintEvent, EK31DroneStateID, oldState, EK31DroneStateID, newState);

public:
	UPROPERTY(BlueprintAssignable)
	FOnStateChangedBlueprintEvent OnStateChangedBlueprintEvent;

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UK31DroneState>> _stateClasses;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK31DroneState> _defaultStateClass;

	UPROPERTY(Transient)
	AGameStateBase* _gameState;

	UPROPERTY(ReplicatedUsing=OnRep_States)
	TArray<UK31DroneState*> _states;

	UPROPERTY(Transient)
	FK31DroneTimestampedState _local_currentState;

	UPROPERTY(ReplicatedUsing=OnRep_AuthorityRepCurrentState, Transient)
	FK31DroneTimestampedState _authority_RepCurrentState;

private:
	UFUNCTION()
	void OnRep_States();

	UFUNCTION()
	void OnRep_AuthorityRepCurrentState();

public:
	UFUNCTION(BlueprintPure)
	EK31DroneStateID GetPreviousStateID() const;

	UFUNCTION(BlueprintPure)
	EK31DroneStateID GetCurrentStateID() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneStateController();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneStateController) { return 0; }
