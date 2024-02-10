#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlatformHelper.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPlatformHelper : public UObject
{
	GENERATED_BODY()

public:
	UPlatformHelper();
};

FORCEINLINE uint32 GetTypeHash(const UPlatformHelper) { return 0; }
