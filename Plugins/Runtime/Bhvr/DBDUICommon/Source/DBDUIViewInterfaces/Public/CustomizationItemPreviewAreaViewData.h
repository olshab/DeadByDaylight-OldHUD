#pragma once

#include "CoreMinimal.h"
#include "CustomizationItemPreviewAreaViewData.generated.h"

class UStoreCustomizationItemViewData;

USTRUCT(BlueprintType)
struct FCustomizationItemPreviewAreaViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStoreCustomizationItemViewData* PreviewItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UStoreCustomizationItemViewData*> ItemsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOutfit;

public:
	DBDUIVIEWINTERFACES_API FCustomizationItemPreviewAreaViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationItemPreviewAreaViewData) { return 0; }
