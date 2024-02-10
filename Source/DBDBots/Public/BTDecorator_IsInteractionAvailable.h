#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "EInteractionCheckType.h"
#include "EIsInteractionAvailableOnFilter.h"
#include "EInputInteractionType.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsInteractionAvailable.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsInteractionAvailable : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EInteractionCheckType InteractionCheckType;

	UPROPERTY(EditInstanceOnly)
	EInputInteractionType InputType;

	UPROPERTY(EditInstanceOnly)
	TArray<FString> InteractionIds;

	UPROPERTY(EditInstanceOnly)
	EIsInteractionAvailableOnFilter OnFilter;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInteractor;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInputType;

	UPROPERTY(EditInstanceOnly)
	bool FailIfAnotherOngoingInteraction;

	UPROPERTY(EditInstanceOnly)
	bool FailIfNotPerformingInteraction;

public:
	UBTDecorator_IsInteractionAvailable();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsInteractionAvailable) { return 0; }
