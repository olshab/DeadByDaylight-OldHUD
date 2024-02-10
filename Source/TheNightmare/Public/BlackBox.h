#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "BlackBox.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBlackBox : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _blockDuration;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _dreamworldSingleGateBlockerStatusEffectClass;

public:
	UBlackBox();
};

FORCEINLINE uint32 GetTypeHash(const UBlackBox) { return 0; }
