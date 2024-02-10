#pragma once

#include "CoreMinimal.h"
#include "PerkIdDropdown.h"
#include "AISkill.h"
#include "AISkill_LeaveGeneratorInteraction.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_LeaveGeneratorInteraction : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FPerkIdDropdown> Perks;

	UPROPERTY(EditDefaultsOnly)
	FName BBIsDoingLeaveGeneratorInteraction;

public:
	UAISkill_LeaveGeneratorInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_LeaveGeneratorInteraction) { return 0; }
