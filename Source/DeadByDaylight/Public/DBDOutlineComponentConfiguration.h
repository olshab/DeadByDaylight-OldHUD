#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Engine/DataAsset.h"
#include "OutlineConfig.h"
#include "OutlineOverrideConfig.h"
#include "OutlineColourConfiguration.h"
#include "GameplayTagContainer.h"
#include "DBDOutlineComponentConfiguration.generated.h"

class UObject;
class UMaterialInterface;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDOutlineComponentConfiguration : public UDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<TSoftClassPtr<UObject>, FOutlineConfig> OutlineConfigs;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<FName, FOutlineColourConfiguration> OutlineColours;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSoftObjectPtr<UMaterialInterface>> TranslucencyDefaultMaterials;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<FGameplayTag, FOutlineOverrideConfig> OutlineOverrideConfigs;

public:
	UDBDOutlineComponentConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const UDBDOutlineComponentConfiguration) { return 0; }
