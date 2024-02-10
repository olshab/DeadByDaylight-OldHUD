#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AISkill_InteractionUseItem_Medkit_Addon.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_Medkit_Addon : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float RemainingChargeThreshold;

public:
	UAISkill_InteractionUseItem_Medkit_Addon();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_Medkit_Addon) { return 0; }
