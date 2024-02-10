#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "MapSpecificComponentsData.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FMapSpecificComponentsData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UActorComponent> MapSpecificComponent;

public:
	DEADBYDAYLIGHT_API FMapSpecificComponentsData();
};

FORCEINLINE uint32 GetTypeHash(const FMapSpecificComponentsData) { return 0; }
