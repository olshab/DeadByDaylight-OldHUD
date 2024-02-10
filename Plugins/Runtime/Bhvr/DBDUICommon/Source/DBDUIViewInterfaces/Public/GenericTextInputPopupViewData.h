#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "GenericTextInputPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UGenericTextInputPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UGenericTextInputPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UGenericTextInputPopupViewData) { return 0; }
