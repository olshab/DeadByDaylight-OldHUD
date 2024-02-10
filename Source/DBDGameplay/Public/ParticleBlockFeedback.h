#pragma once

#include "CoreMinimal.h"
#include "FadingBlockFeedback.h"
#include "ParticleBlockFeedback.generated.h"

class UParticleSystemComponent;

UCLASS(Abstract)
class AParticleBlockFeedback : public AFadingBlockFeedback
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Export)
	UParticleSystemComponent* _effect;

public:
	AParticleBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const AParticleBlockFeedback) { return 0; }
