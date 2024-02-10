#pragma once

#include "CoreMinimal.h"
#include "DBDBaseActorSpawnerActor2.h"
#include "DBDTileSpawnPointActor2.generated.h"

class UTileSpawnPoint;

UCLASS()
class DEADBYDAYLIGHT_API ADBDTileSpawnPointActor2 : public ADBDBaseActorSpawnerActor2
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Export)
	UTileSpawnPoint* tileSpawnPointComponent;

public:
	ADBDTileSpawnPointActor2();
};

FORCEINLINE uint32 GetTypeHash(const ADBDTileSpawnPointActor2) { return 0; }
