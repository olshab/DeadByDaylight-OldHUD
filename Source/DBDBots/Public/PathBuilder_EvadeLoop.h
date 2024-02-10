#pragma once

#include "CoreMinimal.h"
#include "PathBuilder.h"
#include "AITunableParameter.h"
#include "PathBuilder_EvadeLoop.generated.h"

class UNavMovePath;
class UDBDNavEvadeLoopComponent;

UCLASS(EditInlineNew)
class DBDBOTS_API UPathBuilder_EvadeLoop : public UPathBuilder
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float ChaserMeleeAttackRange;

	UPROPERTY(EditDefaultsOnly)
	float ForceEvadePointUnderDistance;

	UPROPERTY(EditDefaultsOnly)
	float ChaserCrossingVaultTimePenalty;

	UPROPERTY(EditDefaultsOnly)
	float ChaserCrossingPalletTimePenalty;

	UPROPERTY(EditDefaultsOnly)
	float ActivePathTimeBonus;

	UPROPERTY(EditDefaultsOnly)
	float InactivePathTimePenalty;

	UPROPERTY(EditDefaultsOnly)
	float SwapPathTimePenalty;

	UPROPERTY(EditDefaultsOnly)
	FString BreakPalletInteractionId;

	UPROPERTY(EditDefaultsOnly)
	float OnPathRadius;

	UPROPERTY(EditDefaultsOnly)
	float ClosePathPointRadius;

	UPROPERTY(EditDefaultsOnly)
	float MaxEvadeInteractableWeightDistance;

	UPROPERTY(EditDefaultsOnly)
	float WeightAtMaxDistance;

	UPROPERTY(EditDefaultsOnly)
	bool MaxWeightAtNearestDistanceIfHostileHasRangedAbility;

	UPROPERTY(EditDefaultsOnly)
	float WeightAtMaxSafety;

	UPROPERTY(EditDefaultsOnly)
	float MaxNearAllyPenaltyPathPointDistance;

	UPROPERTY(EditDefaultsOnly)
	float WeightWhenNearAlly;

	UPROPERTY(EditDefaultsOnly)
	float WeightWhenNearLureableDangerObject;

	UPROPERTY(EditDefaultsOnly)
	float LureableDangerObjectWeightDropoffPerDistance;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MinSafetyRatingAgainstMeleeHostileStimulus;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MinSafetyRatingAgainstRangedHostileStimulus;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter ExtraMinSafetyRatingAgainstFastVaultHostileStimulus;

	UPROPERTY(EditDefaultsOnly)
	float SidekickToLoopInvalidateDistance;

	UPROPERTY(EditDefaultsOnly)
	float TrapToLoopInvalidateDistance;

	UPROPERTY(EditInstanceOnly)
	float EvadeInteractableHeightAmplifierActivationHeight;

	UPROPERTY(EditInstanceOnly)
	float EvadeInteractableHeightAmplifier;

	UPROPERTY(EditInstanceOnly)
	float QuerierReachFallEndBeforeChaserBufferTime;

	UPROPERTY(EditInstanceOnly)
	float ChaserReachFallStartTimeBeforeQuerierFall;

private:
	UPROPERTY(Transient)
	UNavMovePath* _originalEvadeLoopWorkPath;

	UPROPERTY(Transient)
	UNavMovePath* _querierWorkPathA;

	UPROPERTY(Transient)
	UNavMovePath* _querierWorkPathB;

	UPROPERTY(Transient)
	UNavMovePath* _chaserWorkPath;

	UPROPERTY(Transient, Export)
	UDBDNavEvadeLoopComponent* _pickedEvadeLoopComponent;

public:
	UPathBuilder_EvadeLoop();
};

FORCEINLINE uint32 GetTypeHash(const UPathBuilder_EvadeLoop) { return 0; }
