#pragma once

#include "CoreMinimal.h"
#include "K33CosmeticTunnelBlockVariationInfo.h"
#include "UObject/SoftObjectPtr.h"
#include "K33CosmeticTunnelBlockSpawnInfo.generated.h"

class AK33TunnelBlockCosmetic;

USTRUCT()
struct FK33CosmeticTunnelBlockSpawnInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<AK33TunnelBlockCosmetic> DefaultClassType;

	UPROPERTY(EditDefaultsOnly)
	TArray<FK33CosmeticTunnelBlockVariationInfo> Variations;

public:
	THEK33_API FK33CosmeticTunnelBlockSpawnInfo();
};

FORCEINLINE uint32 GetTypeHash(const FK33CosmeticTunnelBlockSpawnInfo) { return 0; }
