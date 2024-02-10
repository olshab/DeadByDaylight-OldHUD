#pragma once

#include "CoreMinimal.h"
#include "ClosetHideInteraction.h"
#include "LockerExitInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API ULockerExitInteraction : public UClosetHideInteraction
{
	GENERATED_BODY()

public:
	ULockerExitInteraction();
};

FORCEINLINE uint32 GetTypeHash(const ULockerExitInteraction) { return 0; }
