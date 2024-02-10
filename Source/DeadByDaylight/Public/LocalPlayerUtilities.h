#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocalPlayerUtilities.generated.h"

class UObject;
class ADBDPlayerState;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API ULocalPlayerUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static ADBDPlayerState* GetFirstLocalValidHumanPlayerState(const UObject* worldContextObject);

public:
	ULocalPlayerUtilities();
};

FORCEINLINE uint32 GetTypeHash(const ULocalPlayerUtilities) { return 0; }
