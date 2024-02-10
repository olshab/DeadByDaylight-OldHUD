#pragma once

#include "CoreMinimal.h"
#include "PlayerScoreEmitter.h"
#include "K31InspectRadarScoreEmitter.generated.h"

UCLASS()
class THEK31_API UK31InspectRadarScoreEmitter : public UPlayerScoreEmitter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _timeAwaitingForInspect;

public:
	UK31InspectRadarScoreEmitter();
};

FORCEINLINE uint32 GetTypeHash(const UK31InspectRadarScoreEmitter) { return 0; }
