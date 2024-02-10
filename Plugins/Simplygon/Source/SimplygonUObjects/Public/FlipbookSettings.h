#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlipbookSettings.generated.h"

USTRUCT(BlueprintType)
struct FFlipbookSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfViews;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ViewDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector UpVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfRows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 FlipRowColumnOrder : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OverrideFlipbookTextureWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 PivotAroundOrigin : 1;

public:
	SIMPLYGONUOBJECTS_API FFlipbookSettings();
};

FORCEINLINE uint32 GetTypeHash(const FFlipbookSettings) { return 0; }
