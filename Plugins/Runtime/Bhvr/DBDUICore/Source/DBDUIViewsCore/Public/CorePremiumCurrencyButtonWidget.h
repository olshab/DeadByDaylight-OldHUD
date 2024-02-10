#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CorePremiumCurrencyButtonWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class UCorePremiumCurrencyButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* PriceTextBlock;

public:
	UFUNCTION(BlueprintPure)
	void SetPrice(const FText& priceText) const;

public:
	UCorePremiumCurrencyButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePremiumCurrencyButtonWidget) { return 0; }
