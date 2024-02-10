#pragma once

#include "CoreMinimal.h"
#include "OnSetSpawnObjectDelegate.generated.h"

class UTileSpawnPoint;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSetSpawnObjectDelegate, UTileSpawnPoint*, tileSpawnPoint, AActor*, spawnedObject);
