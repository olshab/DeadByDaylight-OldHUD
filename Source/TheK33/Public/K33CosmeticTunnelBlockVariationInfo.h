#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "K33CosmeticTunnelBlockVariationInfo.generated.h"

class AK33TunnelBlockCosmetic;

USTRUCT()
struct FK33CosmeticTunnelBlockVariationInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float PercentageChance;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<AK33TunnelBlockCosmetic> TunnelBlockCosmeticClass;

public:
	THEK33_API FK33CosmeticTunnelBlockVariationInfo();
};

FORCEINLINE uint32 GetTypeHash(const FK33CosmeticTunnelBlockVariationInfo) { return 0; }
