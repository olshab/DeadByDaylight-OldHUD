#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "CustomizationCategoryAnimationMappingInfo.h"
#include "CustomizationAnimationMapping.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationAnimationMapping: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> AnimTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomizationCategoryAnimationMappingInfo> _mappingInfos;

public:
	DBDANIMATION_API FCustomizationAnimationMapping();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationAnimationMapping) { return 0; }
