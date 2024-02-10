#pragma once

#include "CoreMinimal.h"
#include "AIGoalGeneratorInterface.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "BTService_FindGoalObject.generated.h"

class UNavigationQueryFilter;
class ADBDAIBTController;

UCLASS(Abstract)
class DBDBOTS_API UBTService_FindGoalObject : public UBTService, public IAIGoalGeneratorInterface
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
	FBlackboardKeySelector BBObjectLocation;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBObject;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalBasicWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightMaxDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightAtMinDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightAtEndgameStart;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightAtEndgameEnd;

	UPROPERTY(EditInstanceOnly)
	FVector ProjectGoalLocationToNavigationExtent;

protected:
	UPROPERTY(Transient)
	ADBDAIBTController* _aiOwner;

	UPROPERTY()
	bool shouldHideBBKeysInEditor;

public:
	UBTService_FindGoalObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindGoalObject) { return 0; }
