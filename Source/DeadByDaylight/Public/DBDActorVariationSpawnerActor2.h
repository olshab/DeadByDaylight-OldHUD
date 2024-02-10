#pragma once

#include "CoreMinimal.h"
#include "DBDBaseActorSpawnerActor2.h"
#include "DBDActorVariationSpawnerActor2.generated.h"

class UActorVariationSpawner;

UCLASS()
class DEADBYDAYLIGHT_API ADBDActorVariationSpawnerActor2 : public ADBDBaseActorSpawnerActor2
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Export)
	UActorVariationSpawner* actorVariationSpawnerComponent;

public:
	ADBDActorVariationSpawnerActor2();
};

FORCEINLINE uint32 GetTypeHash(const ADBDActorVariationSpawnerActor2) { return 0; }
