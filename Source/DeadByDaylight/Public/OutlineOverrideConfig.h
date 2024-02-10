#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "OutlineConfig.h"
#include "OutlineOverrideConfig.generated.h"

class UMaterialInterface;
class UObject;

USTRUCT(BlueprintType)
struct FOutlineOverrideConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSoftObjectPtr<UMaterialInterface>> TranslucencyDefaultMaterialsOverride;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<TSoftClassPtr<UObject>, FOutlineConfig> OutlineOverride;

public:
	DEADBYDAYLIGHT_API FOutlineOverrideConfig();
};

FORCEINLINE uint32 GetTypeHash(const FOutlineOverrideConfig) { return 0; }
