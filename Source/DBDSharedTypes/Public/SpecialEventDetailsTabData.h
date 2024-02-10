#pragma once

#include "CoreMinimal.h"
#include "EDetailsTabLayout.h"
#include "SpecialEventDetailsTabContentData.h"
#include "UObject/SoftObjectPtr.h"
#include "SpecialEventDetailsTabData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSpecialEventDetailsTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EDetailsTabLayout Layout;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FSpecialEventDetailsTabContentData> Content;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> Image;

public:
	DBDSHAREDTYPES_API FSpecialEventDetailsTabData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventDetailsTabData) { return 0; }
