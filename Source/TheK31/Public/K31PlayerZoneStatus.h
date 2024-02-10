#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneZoneOverlapDatum.h"
#include "K31PlayerZoneStatus.generated.h"

class UK31DroneZoneComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31PlayerZoneStatus : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<UK31DroneZoneComponent*, FK31DroneZoneOverlapDatum> _overlappingZones;

public:
	UK31PlayerZoneStatus();
};

FORCEINLINE uint32 GetTypeHash(const UK31PlayerZoneStatus) { return 0; }
