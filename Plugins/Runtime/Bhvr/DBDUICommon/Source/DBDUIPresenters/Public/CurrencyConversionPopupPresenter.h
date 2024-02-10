#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "CurrencyConversionPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class UCurrencyConversionPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	UCurrencyConversionPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UCurrencyConversionPopupPresenter) { return 0; }
