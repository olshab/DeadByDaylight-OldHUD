#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectiveIndicatorViewData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class DBDSHAREDTYPES_API UObjectiveIndicatorViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* IndicatorIcon;

public:
	UObjectiveIndicatorViewData();
};

FORCEINLINE uint32 GetTypeHash(const UObjectiveIndicatorViewData) { return 0; }
