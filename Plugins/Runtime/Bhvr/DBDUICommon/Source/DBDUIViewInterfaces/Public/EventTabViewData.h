#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "EventTabViewData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UEventTabViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> ImageTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldShowEventTomeButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Message;

public:
	UEventTabViewData();
};

FORCEINLINE uint32 GetTypeHash(const UEventTabViewData) { return 0; }
