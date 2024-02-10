#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "UObject/SoftObjectPtr.h"
#include "ETileSpawnPointType.h"
#include "GameplayTagContainer.h"
#include "Dependency.generated.h"

class UIterativeWeightAdjustmentStrategy;
class AActor;

USTRUCT(BlueprintType)
struct FDependency
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	ETileSpawnPointType Type;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath AssetReference;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Object;

	UPROPERTY(EditAnywhere)
	bool Unique;

	UPROPERTY(EditAnywhere)
	int32 Count;

	UPROPERTY(EditAnywhere)
	FName _spawnConditionsName;

	UPROPERTY(EditAnywhere)
	FGameplayTag _elementTag;

	UPROPERTY(EditAnywhere)
	bool _allowFallback;

private:
	UPROPERTY(EditAnywhere)
	int32 _spawnOrder;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UIterativeWeightAdjustmentStrategy> _iterativeWeightAdjustmentStrategyClass;

public:
	DEADBYDAYLIGHT_API FDependency();
};

FORCEINLINE uint32 GetTypeHash(const FDependency) { return 0; }
