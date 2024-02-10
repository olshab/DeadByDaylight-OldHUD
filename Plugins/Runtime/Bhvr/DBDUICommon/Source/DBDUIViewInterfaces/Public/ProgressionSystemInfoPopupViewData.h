#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "ProgressionSystemInfoPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UProgressionSystemInfoPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UProgressionSystemInfoPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UProgressionSystemInfoPopupViewData) { return 0; }
