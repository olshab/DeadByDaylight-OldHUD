#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EKillerAbilities.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "BTService_FindObject.generated.h"

class ADBDAIBTController;
class UBehaviorTree;
class ASlasherPlayer;

UCLASS(Abstract)
class DBDBOTS_API UBTService_FindObject : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EKillerAbilities KillerAbility;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBObject;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBObjectLocation;

	UPROPERTY(EditInstanceOnly)
	bool RunEQSWhenFoundObject;

	UPROPERTY(EditInstanceOnly)
	FEQSParametrizedQueryExecutionRequest EQSRequest;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBEQSResultLocation;

	UPROPERTY(EditInstanceOnly)
	bool RunDynamicSubtreeWhenFoundObject;

	UPROPERTY(EditInstanceOnly)
	FGameplayTag DynamicSubtreeTag;

	UPROPERTY(EditInstanceOnly)
	UBehaviorTree* DynamicSubtree;

protected:
	UPROPERTY(Transient)
	ADBDAIBTController* _aiOwner;

	UPROPERTY(Transient)
	ASlasherPlayer* _killer;

public:
	UBTService_FindObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject) { return 0; }
