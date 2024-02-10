#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LteUIUtilities.generated.h"

UCLASS()
class ULteUIUtilities : public UObject
{
	GENERATED_BODY()

public:
	ULteUIUtilities();
};

FORCEINLINE uint32 GetTypeHash(const ULteUIUtilities) { return 0; }
