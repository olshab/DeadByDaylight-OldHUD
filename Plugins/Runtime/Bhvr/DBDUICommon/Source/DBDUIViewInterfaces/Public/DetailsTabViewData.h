#pragma once

#include "CoreMinimal.h"
#include "EDetailsTabLayout.h"
#include "SpecialEventDetailsTabContentData.h"
#include "UObject/SoftObjectPtr.h"
#include "DetailsTabViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDetailsTabViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDetailsTabLayout Layout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialEventDetailsTabContentData> ContentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Image;

public:
	DBDUIVIEWINTERFACES_API FDetailsTabViewData();
};

FORCEINLINE uint32 GetTypeHash(const FDetailsTabViewData) { return 0; }
