#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDBaseActorSpawnerActor2.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDBaseActorSpawnerActor2 : public AActor
{
	GENERATED_BODY()

public:
	ADBDBaseActorSpawnerActor2();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBaseActorSpawnerActor2) { return 0; }
