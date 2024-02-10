#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TerrorRadiusAudioFeedbackComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UTerrorRadiusAudioFeedbackComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTerrorRadiusAudioFeedbackComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusAudioFeedbackComponent) { return 0; }
