#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "PresenterParentInfo.h"
#include "Layout/Margin.h"
#include "GridPresenterParentInfo.generated.h"

UCLASS(EditInlineNew)
class UGridPresenterParentInfo : public UPresenterParentInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

	UPROPERTY(EditAnywhere)
	FMargin Padding;

	UPROPERTY(EditAnywhere)
	FVector2D Nudge;

	UPROPERTY(EditAnywhere)
	uint32 Row;

	UPROPERTY(EditAnywhere)
	uint32 Column;

public:
	UGridPresenterParentInfo();
};

FORCEINLINE uint32 GetTypeHash(const UGridPresenterParentInfo) { return 0; }
