#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "TerrorRadiusIndicatorViewData.generated.h"

UCLASS(BlueprintType)
class DBDSHAREDTYPES_API UTerrorRadiusIndicatorViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag TerrorRadiusHeartState;

public:
	UTerrorRadiusIndicatorViewData();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusIndicatorViewData) { return 0; }
