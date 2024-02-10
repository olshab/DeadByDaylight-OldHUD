#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GuidingInfo.h"
#include "EImmobilizedState.h"
#include "NavigationStateComponent.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UNavigationStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ImmobilizedState)
	EImmobilizedState _immobilizedState;

	UPROPERTY(ReplicatedUsing=OnRep_GuidedState)
	FGuidingInfo _guidedState;

	UPROPERTY()
	TArray<ADBDPlayer*> _local_oldGuidedPlayers;

private:
	UFUNCTION()
	void OnRep_ImmobilizedState(EImmobilizedState previousState);

	UFUNCTION()
	void OnRep_GuidedState(const FGuidingInfo& previousState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UNavigationStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationStateComponent) { return 0; }
