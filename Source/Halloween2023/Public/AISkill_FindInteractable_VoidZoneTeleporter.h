#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AISkill_FindInteractable_VoidZoneTeleporter.generated.h"

UCLASS(EditInlineNew)
class UAISkill_FindInteractable_VoidZoneTeleporter : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UAISkill_FindInteractable_VoidZoneTeleporter();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_VoidZoneTeleporter) { return 0; }
