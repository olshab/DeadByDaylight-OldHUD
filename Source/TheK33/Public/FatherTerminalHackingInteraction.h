#pragma once

#include "CoreMinimal.h"
#include "DirectionalMiniGameDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "InteractionDefinition.h"
#include "EDirectionalMinigameResult.h"
#include "FatherTerminalHackingInteraction.generated.h"

class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFatherTerminalHackingInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWormholeTerminalSuccessfullyEndMiniGameAnimationStarted);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWormholeTerminalHackingInteractionStarted);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWormholeTerminalHackingCooldownTimerStartOrDone, bool, isRunning);

public:
	UPROPERTY(BlueprintAssignable)
	FOnWormholeTerminalHackingCooldownTimerStartOrDone Cosmetic_OnCooldownTimerStartOrDoneEvent;

	UPROPERTY(BlueprintAssignable)
	FOnWormholeTerminalHackingInteractionStarted Cosmetic_OnInteractionStarted;

	UPROPERTY(BlueprintAssignable)
	FOnWormholeTerminalSuccessfullyEndMiniGameAnimationStarted Cosmetic_OnSuccessfullyEndMiniGameAnimationStarted;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FDirectionalMiniGameDefinition _miniGameDefinition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _cooldownDurationSeconds;

private:
	UPROPERTY(Replicated)
	bool _isHackingCompleted;

	UPROPERTY(ReplicatedUsing=OnRep_IsCooldownTimerRunning)
	bool _isCooldownTimerRunning;

	UPROPERTY(Replicated)
	bool _useSuccessfullyEndMiniGameExit;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _successfullyEndMiniGameAnimationMontageDescriptor;

private:
	UFUNCTION()
	void OnRep_IsCooldownTimerRunning();

	UFUNCTION()
	void Authority_OnMiniGameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result);

	UFUNCTION()
	void Authority_OnCooldownTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFatherTerminalHackingInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UFatherTerminalHackingInteraction) { return 0; }
