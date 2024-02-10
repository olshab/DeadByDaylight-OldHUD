#pragma once

#include "CoreMinimal.h"
#include "BaseTotemInteraction.h"
#include "CleanseTotem.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCleanseTotem : public UBaseTotemInteraction
{
	GENERATED_BODY()

public:
	UCleanseTotem();
};

FORCEINLINE uint32 GetTypeHash(const UCleanseTotem) { return 0; }
