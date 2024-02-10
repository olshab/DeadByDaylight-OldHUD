#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AISkill_FindCollectable.h"
#include "AISkill_FindCollectable_Camper.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindCollectable_Camper : public UAISkill_FindCollectable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float CollectUnderItemWeight;

	UPROPERTY(EditDefaultsOnly)
	float CollectOverWeightRatioDifference;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter WantToKeepEmptyItemPenalty;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter CloseItemDistThreshold;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter CloseItemWeightMultiplier;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ItemGoalWeightMultiplier;

	UPROPERTY(EditInstanceOnly)
	float EmptyItemChargeThreshold;

public:
	UAISkill_FindCollectable_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable_Camper) { return 0; }
