#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DreamSnareEffect.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDreamSnareEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:
	UDreamSnareEffect();
};

FORCEINLINE uint32 GetTypeHash(const UDreamSnareEffect) { return 0; }
