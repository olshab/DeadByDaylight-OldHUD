#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "GenericRefreshingPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UGenericRefreshingPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float DefaultRefreshingIntervalsTime;

	UPROPERTY(EditAnywhere)
	float DefaultTimeoutTime;

public:
	UGenericRefreshingPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UGenericRefreshingPopupPresenter) { return 0; }
