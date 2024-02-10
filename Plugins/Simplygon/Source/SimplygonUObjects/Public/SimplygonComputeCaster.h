#pragma once

#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "ComputeCasterSettings.h"
#include "SimplygonComputeCaster.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonComputeCaster : public USimplygonMaterialCaster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComputeCasterSettings ComputeCasterSettings;

public:
	USimplygonComputeCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonComputeCaster) { return 0; }
