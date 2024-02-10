#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "GenericRefreshingPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UGenericRefreshingPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float RefreshingIntervalsTime;

	UPROPERTY(EditAnywhere)
	float TimeoutTime;

public:
	UGenericRefreshingPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UGenericRefreshingPopupViewData) { return 0; }
