#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K31Utilities.generated.h"

UCLASS()
class THEK31_API UK31Utilities : public UObject
{
	GENERATED_BODY()

public:
	UK31Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK31Utilities) { return 0; }
