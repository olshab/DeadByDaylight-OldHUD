#pragma once

#include "CoreMinimal.h"
#include "SingleModifierCondition.h"
#include "TimerElapsedCondition.generated.h"

class UTimerObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UTimerElapsedCondition : public USingleModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UTimerObject* _timer;

public:
	UTimerElapsedCondition();
};

FORCEINLINE uint32 GetTypeHash(const UTimerElapsedCondition) { return 0; }
