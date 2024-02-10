#pragma once

#include "CoreMinimal.h"
#include "AccessoryLoadingData.generated.h"

class UAccessory;

USTRUCT()
struct FAccessoryLoadingData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, Export)
	UAccessory* Accessory;

public:
	DEADBYDAYLIGHT_API FAccessoryLoadingData();
};

FORCEINLINE uint32 GetTypeHash(const FAccessoryLoadingData) { return 0; }
