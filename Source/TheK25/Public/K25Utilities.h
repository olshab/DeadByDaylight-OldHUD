#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K25Utilities.generated.h"

class AK25ControlledProjectile;
class AK25Power;
class UObject;
class ALamentConfiguration;
class AK25Husk;
class AK25Gateway;

UCLASS(BlueprintType)
class UK25Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static ALamentConfiguration* GetLamentConfiguration(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK25Power* GetK25Power(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK25Husk* GetK25Husk(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK25Gateway* GetK25Gateway(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK25ControlledProjectile* GetK25ControlledProjectile(const UObject* worldContextObject);

public:
	UK25Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK25Utilities) { return 0; }
