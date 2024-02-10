#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K34Utilities.generated.h"

class AK34Power;
class ADBDPlayer;
class UAuthoritativeActorPoolComponent;

UCLASS(BlueprintType)
class UK34Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static UAuthoritativeActorPoolComponent* GetK34VFXFeetPool(const ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static AK34Power* GetK34Power(const ADBDPlayer* player);

public:
	UK34Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK34Utilities) { return 0; }
