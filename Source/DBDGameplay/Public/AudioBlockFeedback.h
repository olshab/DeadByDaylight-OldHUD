#pragma once

#include "CoreMinimal.h"
#include "BlockFeedbackBase.h"
#include "AudioBlockFeedback.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Abstract)
class AAudioBlockFeedback : public ABlockFeedbackBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* _akAudioEventBlockStart;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* _akAudioEventBlockStop;

private:
	UPROPERTY(Transient, Export)
	UAkComponent* _blockableAudioComponent;

public:
	AAudioBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const AAudioBlockFeedback) { return 0; }
