#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AISkill_InteractionUseItem_K32Emp.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_K32Emp : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	float NearPodDistance;

	UPROPERTY(EditDefaultsOnly)
	FName BBIsFleeing;

	UPROPERTY(EditInstanceOnly)
	float SurvivorHeight;

	UPROPERTY(EditInstanceOnly)
	float DoNotUseEmpUnderNavLinkDistance;

	UPROPERTY(EditInstanceOnly)
	float MaxTimeToUseEmpAfterLockonCooldown;

public:
	UAISkill_InteractionUseItem_K32Emp();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_K32Emp) { return 0; }
