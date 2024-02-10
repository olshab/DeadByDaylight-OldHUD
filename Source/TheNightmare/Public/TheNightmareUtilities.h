#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TheNightmareUtilities.generated.h"

class ADBDPlayer;
class UDreamSnareEffect;

UCLASS(BlueprintType)
class UTheNightmareUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static UDreamSnareEffect* GetDreamSnareStatusEffect(const ADBDPlayer* player);

public:
	UTheNightmareUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UTheNightmareUtilities) { return 0; }
