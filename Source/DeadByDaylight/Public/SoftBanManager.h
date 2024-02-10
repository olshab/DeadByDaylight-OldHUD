#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoftBanManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USoftBanManager : public UObject
{
	GENERATED_BODY()

public:
	USoftBanManager();
};

FORCEINLINE uint32 GetTypeHash(const USoftBanManager) { return 0; }
