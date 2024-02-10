#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K33TunnelPulsationComponent.generated.h"

class AK33TunnelPulse;
class ULocalActorPoolComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TunnelPulsationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _initialPulsePoolSize;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK33TunnelPulse> _tunnelPulseActorClass;

	UPROPERTY(EditDefaultsOnly)
	float _pulseSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _timeBetweenPulseWaves;

	UPROPERTY(EditDefaultsOnly)
	int32 _numberOfPulsesPerWaves;

	UPROPERTY(EditDefaultsOnly)
	float _timeBetweenPulsesInWave;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceToTriggerNextPulseWave;

	UPROPERTY(Transient, Export)
	ULocalActorPoolComponent* _pool;

public:
	UK33TunnelPulsationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelPulsationComponent) { return 0; }
