#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K33Utilities.generated.h"

class AK33Power;
class UK33SpecialModeComponent;
class UObject;
class UAuthoritativeActorPoolComponent;
class ULocalActorPoolComponent;
class AK33Husk;

UCLASS(BlueprintType)
class THEK33_API UK33Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static UAuthoritativeActorPoolComponent* GetTurretsPool(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static UK33SpecialModeComponent* GetSpecialModeComponent(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static ULocalActorPoolComponent* GetK33VFXFeetPool(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK33Power* GetK33Power(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK33Husk* GetK33Husk(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static int32 GetAvailableTurretsCountInPool(const UObject* worldContextObject);

public:
	UK33Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK33Utilities) { return 0; }
