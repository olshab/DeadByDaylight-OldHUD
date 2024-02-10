#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NavmeshGeneratorComponent.generated.h"

class ANavMeshBoundsVolume;

UCLASS(meta=(BlueprintSpawnableComponent))
class UNavmeshGeneratorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<ANavMeshBoundsVolume*> _availableNavmeshBoundsVolumes;

public:
	UNavmeshGeneratorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UNavmeshGeneratorComponent) { return 0; }
