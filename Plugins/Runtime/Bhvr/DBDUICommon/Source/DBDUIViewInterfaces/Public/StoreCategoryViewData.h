#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "UObject/SoftObjectPtr.h"
#include "StoreCategoryViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FStoreCategoryViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

public:
	DBDUIVIEWINTERFACES_API FStoreCategoryViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCategoryViewData) { return 0; }
