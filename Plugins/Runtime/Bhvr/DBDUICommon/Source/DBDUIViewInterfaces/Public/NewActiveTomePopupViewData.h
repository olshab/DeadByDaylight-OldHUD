#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "NewActiveTomePopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UNewActiveTomePopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UNewActiveTomePopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UNewActiveTomePopupViewData) { return 0; }
