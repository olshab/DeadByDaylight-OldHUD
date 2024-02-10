#pragma once

#include "CoreMinimal.h"
#include "BasePopupViewData.h"
#include "ProcessingPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UProcessingPopupViewData : public UBasePopupViewData
{
	GENERATED_BODY()

public:
	UProcessingPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UProcessingPopupViewData) { return 0; }
