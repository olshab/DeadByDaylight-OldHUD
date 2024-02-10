#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TooltipEventSkinUIDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTooltipEventSkinUIDataRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString EventBannerLabel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* HeaderDecorationTexture;

public:
	DBDSHAREDTYPES_API FTooltipEventSkinUIDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FTooltipEventSkinUIDataRow) { return 0; }
