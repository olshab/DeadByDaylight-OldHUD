#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDirectionalInputKey.h"
#include "DirectionalMiniGameDefinition.h"
#include "DirectionalMinigameComponent.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDirectionalMinigameComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	ACamperPlayer* _currentlyEngagedSurvivor;

	UPROPERTY(Replicated)
	TArray<EDirectionalInputKey> _currentSequence;

	UPROPERTY(ReplicatedUsing=OnRep_IsInProgress)
	bool _isInProgress;

	UPROPERTY(Replicated)
	int32 _currentKeyIndex;

	UPROPERTY(Replicated)
	FDirectionalMiniGameDefinition _miniGameDefinition;

public:
	UFUNCTION(Server, Reliable)
	void Server_EnterKey(EDirectionalInputKey enteredKey);

	UFUNCTION(Server, Reliable)
	void Server_CancelMinigame();

private:
	UFUNCTION()
	void OnRep_IsInProgress();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_StartMinigameForSurvivor(ACamperPlayer* survivor, const FDirectionalMiniGameDefinition& miniGameDefinition);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDirectionalMinigameComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDirectionalMinigameComponent) { return 0; }
