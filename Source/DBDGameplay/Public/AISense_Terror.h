#pragma once

#include "CoreMinimal.h"
#include "AITerrorEvent.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "AISense_Terror.generated.h"

class UObject;
class UTerrorRadiusEmitterComponent;
class AActor;

UCLASS()
class DBDGAMEPLAY_API UAISense_Terror : public UAISense
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<FAITerrorEvent> _events;

public:
	UFUNCTION(BlueprintCallable)
	static void ReportTerrorEvent(UObject* worldContextObj, FVector location, AActor* instigator, UTerrorRadiusEmitterComponent* terrorEmitter);

public:
	UAISense_Terror();
};

FORCEINLINE uint32 GetTypeHash(const UAISense_Terror) { return 0; }
