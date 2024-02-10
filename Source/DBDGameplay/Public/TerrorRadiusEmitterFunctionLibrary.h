#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TerrorRadiusEmitterFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UTerrorRadiusEmitterFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintPure)
	static int32 GetActiveFakeTerrorRadiusEmittersCount(const UObject* worldContextObject);

public:
	UTerrorRadiusEmitterFunctionLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusEmitterFunctionLibrary) { return 0; }
