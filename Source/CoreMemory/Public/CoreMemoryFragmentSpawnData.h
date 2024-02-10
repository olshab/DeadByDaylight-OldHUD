#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryFragmentSpawnData.generated.h"

class ACoreMemoryFragment;

USTRUCT()
struct FCoreMemoryFragmentSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACoreMemoryFragment> FragmentClass;

	UPROPERTY(EditDefaultsOnly)
	float TriggerZoneRadiusDistance;

	UPROPERTY(EditDefaultsOnly)
	float SpawnDistanceFromPlayer;

	UPROPERTY(EditDefaultsOnly)
	float SpawnDistanceFromOtherFragments;

	UPROPERTY(EditDefaultsOnly)
	float HeightDistance;

public:
	COREMEMORY_API FCoreMemoryFragmentSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FCoreMemoryFragmentSpawnData) { return 0; }
