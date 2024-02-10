#pragma once

#include "CoreMinimal.h"
#include "CurrencyConversionPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "CurrencyConversionPopupWidget.generated.h"

class UCurrencyConversionPopupViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCurrencyConversionPopupWidget : public UCoreGenericPopupWidget, public ICurrencyConversionPopupViewInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const UCurrencyConversionPopupViewData* data);

public:
	UCurrencyConversionPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCurrencyConversionPopupWidget) { return 0; }
