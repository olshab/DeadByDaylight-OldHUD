#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "EventSpawnableStaticMeshActor.generated.h"

class UEventSpawnableComponent;

UCLASS()
class DEADBYDAYLIGHT_API AEventSpawnableStaticMeshActor : public AStaticMeshActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, NoClear, Export)
	UEventSpawnableComponent* _eventSpawnableComponent;

public:
	AEventSpawnableStaticMeshActor();
};

FORCEINLINE uint32 GetTypeHash(const AEventSpawnableStaticMeshActor) { return 0; }
