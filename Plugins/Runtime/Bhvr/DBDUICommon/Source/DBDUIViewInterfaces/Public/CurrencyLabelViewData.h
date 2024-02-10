#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ECurrencyType.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CurrencyLabelViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCurrencyLabelViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool PlayBonusAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsClickable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCurrencyProgressionTooltipViewData TooltipData;

public:
	DBDUIVIEWINTERFACES_API FCurrencyLabelViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyLabelViewData) { return 0; }
