#pragma once

#include "CoreMinimal.h"
#include "LamentConfigurationSpawnInfo.generated.h"

class UTileSpawnPoint;

USTRUCT()
struct FLamentConfigurationSpawnInfo
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UTileSpawnPoint* _spawnPoint;

public:
	THEK25_API FLamentConfigurationSpawnInfo();
};

FORCEINLINE uint32 GetTypeHash(const FLamentConfigurationSpawnInfo) { return 0; }
