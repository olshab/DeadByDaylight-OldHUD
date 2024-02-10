#pragma once

#include "CoreMinimal.h"
#include "PlayerBlockData.h"
#include "BlockableReplicatedDatum.generated.h"

class UObject;

USTRUCT()
struct FBlockableReplicatedDatum
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<UObject>> Sources;

	UPROPERTY(Transient)
	TArray<FPlayerBlockData> BlockedPlayersData;

public:
	DEADBYDAYLIGHT_API FBlockableReplicatedDatum();
};

FORCEINLINE uint32 GetTypeHash(const FBlockableReplicatedDatum) { return 0; }
