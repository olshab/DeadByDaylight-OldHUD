#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K33TurretAudioVolumeAdjuster.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TurretAudioVolumeAdjuster : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _distanceToTrackTurrets;

public:
	UK33TurretAudioVolumeAdjuster();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretAudioVolumeAdjuster) { return 0; }
