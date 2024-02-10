#pragma once

#include "CoreMinimal.h"
#include "AIGoalGeneratorInterface.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractable.generated.h"

class UNavigationQueryFilter;
class AInteractable;
class ADBDAIBTController;

UCLASS(Abstract)
class DBDBOTS_API UBTService_FindInteractable : public UBTService, public IAIGoalGeneratorInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBSearchAround;

	UPROPERTY(EditInstanceOnly)
	float SearchInterval;

	UPROPERTY(EditInstanceOnly)
	float SearchHeightAmplifierActivationHeight;

	UPROPERTY(EditInstanceOnly)
	float SearchHeightAmplifier;

	UPROPERTY(EditInstanceOnly)
	TSubclassOf<UNavigationQueryFilter> FilterClass;

	UPROPERTY(EditInstanceOnly)
	bool RegisterAsDiscoveredWhenFound;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBOnlyFromActor;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfInPressureZone;

	UPROPERTY(EditInstanceOnly)
	FName RejectCooldownContextName;

	UPROPERTY(EditInstanceOnly)
	bool AbandonIfInChase;

	UPROPERTY(EditInstanceOnly)
	bool RejectIfFocusedByOther;

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
	FBlackboardKeySelector BBInteractableLocation;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInteractableObj;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalBasicWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightMaxDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightAtMinDistance;

	UPROPERTY(EditInstanceOnly)
	FVector ProjectGoalLocationToNavigationExtent;

protected:
	UPROPERTY(Transient)
	AInteractable* _goalInteractable;

	UPROPERTY(Transient)
	ADBDAIBTController* _aiOwner;

public:
	UBTService_FindInteractable();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractable) { return 0; }
