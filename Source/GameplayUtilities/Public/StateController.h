#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "StateController.generated.h"

class UBaseReplicatedState;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UStateController : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChangedBlueprintEvent, FGameplayTag, oldState, FGameplayTag, newState);

public:
	UPROPERTY(BlueprintAssignable)
	FOnStateChangedBlueprintEvent OnStateChangedBlueprintEvent;

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UBaseReplicatedState>> _stateClasses;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBaseReplicatedState> _defaultStateClass;

	UPROPERTY(ReplicatedUsing=OnRep_States)
	TArray<UBaseReplicatedState*> _states;

	UPROPERTY(Transient)
	UBaseReplicatedState* _local_currentState;

	UPROPERTY(ReplicatedUsing=OnRep_AuthorityRepCurrentState, Transient)
	UBaseReplicatedState* _authority_RepCurrentState;

private:
	UFUNCTION()
	void OnRep_States();

	UFUNCTION()
	void OnRep_AuthorityRepCurrentState();

public:
	UFUNCTION(BlueprintPure)
	FGameplayTag GetCurrentStateID() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStateController();
};

FORCEINLINE uint32 GetTypeHash(const UStateController) { return 0; }
