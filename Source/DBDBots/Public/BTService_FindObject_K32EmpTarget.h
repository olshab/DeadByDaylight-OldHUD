#pragma once

#include "CoreMinimal.h"
#include "BTService_FindObject.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FindObject_K32EmpTarget.generated.h"

class AActor;

UCLASS()
class DBDBOTS_API UBTService_FindObject_K32EmpTarget : public UBTService_FindObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	TArray<TSubclassOf<AActor>> ValidGoalObjectClasses;

	UPROPERTY(EditInstanceOnly)
	float NearGoalPodHorizontalDistance;

	UPROPERTY(EditInstanceOnly)
	float NearGoalPodVerticalDistance;

	UPROPERTY(EditInstanceOnly)
	float NearGoalSurvivorHorizontalDistance;

	UPROPERTY(EditInstanceOnly)
	float NearGoalSurvivorVerticalDistance;

	UPROPERTY(EditInstanceOnly)
	float OtherSurvivorNearTargetDistance;

	UPROPERTY(EditInstanceOnly)
	FVector NavMeshTargetLocationExtents;

	UPROPERTY(EditInstanceOnly)
	float CheckDynamicSubtreeInterval;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBOriginalFocusedActor;

public:
	UBTService_FindObject_K32EmpTarget();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject_K32EmpTarget) { return 0; }
