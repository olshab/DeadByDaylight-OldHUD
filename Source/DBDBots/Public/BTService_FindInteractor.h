#pragma once

#include "CoreMinimal.h"
#include "BTService_FindGoalObject.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor.generated.h"

class UInteractor;

UCLASS(Abstract)
class DBDBOTS_API UBTService_FindInteractor : public UBTService_FindGoalObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	bool RegisterAsDiscoveredWhenFound;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBOnlyFromActor;

	UPROPERTY(EditInstanceOnly)
	TArray<FString> OnlyWithInteractorIDs;

	UPROPERTY(EditInstanceOnly)
	float RejectIfTerrorIsCloserThanSelfMargin;

	UPROPERTY(EditInstanceOnly)
	float RejectIfInTerrorRadius;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfInPressureZone;

	UPROPERTY(EditInstanceOnly)
	bool UseLastKnownPositionForTerrorRejects;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfWasInCooldownAndFocusedOnAnotherObject;

	UPROPERTY(EditInstanceOnly)
	FName RejectCooldownContextName;

	UPROPERTY(EditInstanceOnly)
	bool IgnoreMindFocusCooldown;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfAnySiblingInteractorHasCooldown;

	UPROPERTY(EditInstanceOnly)
	bool AbandonIfInChase;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfFocusedByOther;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfInteractableFocusedByOther;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfNotFocusedBySelf;

	UPROPERTY(EditInstanceOnly)
	bool IgnoreFocusFilterInEndgameCollapse;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfNotInSight;

	UPROPERTY(EditInstanceOnly)
	bool IgnoreSightFilterIfDiscovered;

	UPROPERTY(EditInstanceOnly)
	bool IgnoreSightFilterIfInRange;

	UPROPERTY(EditInstanceOnly)
	float RejectAboveRange;

	UPROPERTY(EditInstanceOnly)
	bool IgnoreRangeFilterIfDiscovered;

	UPROPERTY(EditInstanceOnly)
	bool IgnoreRangeFilterIfInSight;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInteractLocation;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInteractorObj;

	UPROPERTY(EditInstanceOnly)
	bool UsesActorLocation;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter CantInterruptGoalInteractionUnderRemainingTime;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightBonusWhileInteracting;

	UPROPERTY(EditInstanceOnly)
	FName InteractionSpeedStatusEffectID;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightInteractionSpeedVariance;

	UPROPERTY(EditInstanceOnly)
	bool IsUnsafeAction;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBUnsafeActionID;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBUnsafeActionUsesItemAddons;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBUnsafeActionIsSelfInteraction;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBUnsafeActionRange;

	UPROPERTY(EditInstanceOnly)
	FString UnsafeInteractionID;

	UPROPERTY(EditInstanceOnly)
	bool UnsafeActionUsesItemAddons;

	UPROPERTY(EditInstanceOnly)
	bool UnsafeActionIsSelfInteraction;

	UPROPERTY(EditInstanceOnly)
	float UnsafeActionRange;

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UInteractor* _goalInteractor;

public:
	UBTService_FindInteractor();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor) { return 0; }
