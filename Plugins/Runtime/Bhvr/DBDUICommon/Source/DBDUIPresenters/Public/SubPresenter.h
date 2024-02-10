#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubPresenter.generated.h"

UCLASS(Abstract)
class DBDUIPRESENTERS_API USubPresenter : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnPresenterStopAsyncOperation();

	UFUNCTION()
	void OnPresenterStartAsyncOperation();

public:
	USubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const USubPresenter) { return 0; }
