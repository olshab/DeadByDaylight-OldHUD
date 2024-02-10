#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTService_StateMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StateMonitor_Camper.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StateMonitor_Camper : public UBTService_StateMonitor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBDamageState;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBImmoblizedState;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBGuidedState;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBEscapedState;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsInInjuredBleedout;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBDyingTimerPercentLeft;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBHookTimerPercentLeft;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBHookDrainStage;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBItemType;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBItemCharge;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsHoldingEmptyItem;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBSpecialItemID;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsChased;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBWasInStimulusSight;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBWasBeingAimedAt;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsBeingAimedAt;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsBeingAttacked;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsChained;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsInPressureZone;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsInActivatedRBT;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsInDeathTimer;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBHasCrowAttached;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBLastTrapSideStepExpirationTime;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBLastAskedToMoveTime;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBPreventDroppingEmptyItems;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIgnoreGoalPressure;

	UPROPERTY(EditInstanceOnly)
	float EmptyItemChargeThreshold;

	UPROPERTY(EditInstanceOnly)
	float DeathTimerEndGamePercent;

	UPROPERTY(EditInstanceOnly)
	float ChaseUnseenMinimumKillerRange;

	UPROPERTY(EditInstanceOnly)
	float ChaseSeenMinimumKillerRange;

	UPROPERTY(EditInstanceOnly)
	float ChasedMinimumScore;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreKillerAtMinimumDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreKillerDistanceMaxRange;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreKillerWhenUnknownLocation;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScorePredictedTarget;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreKillerLastKnownDirection;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreKillerMaxDirectionAngle;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreSurvivorWhenVisible;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreSurvivorVisibilityTime;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreKillerUndetectable;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreKillerRangedAndDash;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ChasedScoreKillerChaseTarget;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScoreDistanceWhenUnknownLocation;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScorePredictedTargetMultiplier;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScoreKillerMaxDirectionAngle;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScoreKillerDirectionMaxMultiplier;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScoreSurvivorVisibilityTime;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScoreMaxMultiplierWhenSurvivorVisible;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScoreKillerRangedAndDashDistancePenalty;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScoreChaseTargetMultiplier;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PressureScoreMaxScore;

public:
	UBTService_StateMonitor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StateMonitor_Camper) { return 0; }
