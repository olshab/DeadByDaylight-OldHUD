#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CanUnsafeAction.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_CanUnsafeAction : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBUnsafeActionID;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBUnsafeActionUsesItemAddons;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBUnsafeActionIsSelfInteraction;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBUnsafeActionRange;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBGoalInteractor;

	UPROPERTY(EditInstanceOnly)
	float ExtraHealthyTime;

	UPROPERTY(EditInstanceOnly)
	float ExtraInjuredTime;

public:
	UBTDecorator_CanUnsafeAction();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CanUnsafeAction) { return 0; }
