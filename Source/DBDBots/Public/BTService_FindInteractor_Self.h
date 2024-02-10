#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FindInteractor.h"
#include "AISelfHelpInteraction.h"
#include "GameplayTagContainer.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Self.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Self : public UBTService_FindInteractor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInputType;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsSkillSelfInteraction;

	UPROPERTY(EditInstanceOnly)
	TArray<FAISelfHelpInteraction> SelfHelpInteractions;

	UPROPERTY(EditInstanceOnly)
	FGameplayTag SelfInteractionContext;

	UPROPERTY(EditInstanceOnly)
	float SurvivorProximityRange;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter SurvivorProximityWeightPenalty;

public:
	UBTService_FindInteractor_Self();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Self) { return 0; }
