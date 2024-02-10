#pragma once

#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AIUnclearNoiseEvent.h"
#include "UObject/NoExportTypes.h"
#include "AISense_UnclearHearing.generated.h"

class UObject;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UAISense_UnclearHearing : public UAISense
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<FAIUnclearNoiseEvent> NoiseEvents;

public:
	UFUNCTION(BlueprintCallable)
	static void ReportUnclearNoiseEvent(UObject* worldContextObject, FVector noiseLocation, float loudness, AActor* instigator, float maxRange, FName tag);

public:
	UAISense_UnclearHearing();
};

FORCEINLINE uint32 GetTypeHash(const UAISense_UnclearHearing) { return 0; }
