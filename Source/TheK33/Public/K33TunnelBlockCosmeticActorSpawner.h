#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "K33CosmeticTunnelBlockSpawnInfo.h"
#include "UObject/SoftObjectPtr.h"
#include "K33TunnelBlockCosmeticActorSpawner.generated.h"

class AK33TunnelBlockCosmetic;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK33_API UK33TunnelBlockCosmeticActorSpawner : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FK33CosmeticTunnelBlockSpawnInfo _cosmeticBlockSpawnInfo;

	UPROPERTY(Transient)
	TSoftClassPtr<AK33TunnelBlockCosmetic> _selectedTunnelBlockCosmeticClass;

	UPROPERTY(EditDefaultsOnly)
	int32 _editorVariationIndex;

public:
	UK33TunnelBlockCosmeticActorSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelBlockCosmeticActorSpawner) { return 0; }
