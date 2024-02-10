#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "Templates/SubclassOf.h"
#include "AISkill_FindInteractable_K32ItemBox.generated.h"

class AActor;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_K32ItemBox : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FName BBK32EmpTargetActor;

	UPROPERTY(EditInstanceOnly)
	FName BBOriginalFocusedActor;

	UPROPERTY(EditInstanceOnly)
	TArray<TSubclassOf<AActor>> GoalClassesToGiveAdditionalWeight;

	UPROPERTY(EditDefaultsOnly)
	float EmpTargetNearGoalWeight;

	UPROPERTY(EditDefaultsOnly)
	float NearEmpBoxGoalWeight;

	UPROPERTY(EditDefaultsOnly)
	float NearEmpBoxDistance;

	UPROPERTY(EditDefaultsOnly)
	int32 K32EmpMaxCount;

	UPROPERTY(EditDefaultsOnly)
	float K32ItemBoxChargeWeightRatio;

public:
	UAISkill_FindInteractable_K32ItemBox();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_K32ItemBox) { return 0; }
