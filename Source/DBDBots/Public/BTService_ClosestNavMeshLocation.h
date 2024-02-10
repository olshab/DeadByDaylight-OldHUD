#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "UObject/NoExportTypes.h"
#include "BTService_ClosestNavMeshLocation.generated.h"

class UNavigationSystemV1;
class ANavigationData;

UCLASS()
class DBDBOTS_API UBTService_ClosestNavMeshLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBAroundLocation;

	UPROPERTY(EditInstanceOnly)
	float ValidLocationRefreshInterval;

	UPROPERTY(EditInstanceOnly)
	float InvalidLocationRefreshInterval;

	UPROPERTY(EditInstanceOnly)
	FName NavDataAgentName;

	UPROPERTY(EditInstanceOnly)
	FVector NavMeshProjectionBoxExtent;

private:
	UPROPERTY()
	UNavigationSystemV1* _navigationSystem;

	UPROPERTY()
	ANavigationData* _navigationData;

public:
	UBTService_ClosestNavMeshLocation();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_ClosestNavMeshLocation) { return 0; }
