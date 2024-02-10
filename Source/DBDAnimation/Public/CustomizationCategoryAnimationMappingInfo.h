#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "CustomizationCategoryAnimationMappingInfo.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationCategoryAnimationMappingInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory CustomizationCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

public:
	DBDANIMATION_API FCustomizationCategoryAnimationMappingInfo();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationCategoryAnimationMappingInfo) { return 0; }
