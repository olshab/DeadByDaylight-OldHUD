#pragma once
#include "CoreMinimal.h"
#include "EAfflictionLevel.h"
#include "KillerStatusData.generated.h"

USTRUCT(BlueprintType)
struct FKillerStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAfflictionLevel AfflictionLevel;
    
    DBDUIVIEWINTERFACES_API FKillerStatusData();
};

