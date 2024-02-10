#pragma once

#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "AIUnclearNoiseEvent.h"
#include "AISenseEvent_UnclearHearing.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseEvent_UnclearHearing : public UAISenseEvent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIUnclearNoiseEvent Event;

public:
	UAISenseEvent_UnclearHearing();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseEvent_UnclearHearing) { return 0; }
