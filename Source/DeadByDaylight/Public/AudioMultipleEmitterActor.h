#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioMultipleEmitterActor.generated.h"

class UAudioMultipleEmitterComponent;

UCLASS()
class DEADBYDAYLIGHT_API AAudioMultipleEmitterActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Export)
	UAudioMultipleEmitterComponent* AudioMultiEmitter;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> EmitterActors;

public:
	AAudioMultipleEmitterActor();
};

FORCEINLINE uint32 GetTypeHash(const AAudioMultipleEmitterActor) { return 0; }
