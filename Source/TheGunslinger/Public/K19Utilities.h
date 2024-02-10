#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESpawnerStrategyType.h"
#include "K19Utilities.generated.h"

class UMaterialInterface;
class UObject;

UCLASS(BlueprintType)
class THEGUNSLINGER_API UK19Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void K19ReleaseDecalSpawner(const UObject* worldContextObject, FName decalSpawnerName);

	UFUNCTION(BlueprintCallable)
	static void K19CreateDecalSpawner(const UObject* worldContextObject, FName decalSpawnerName, UMaterialInterface* decalMaterial, int32 poolSize, ESpawnerStrategyType spawnerStrategyType);

public:
	UK19Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK19Utilities) { return 0; }
