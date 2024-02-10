#pragma once

#include "CoreMinimal.h"
#include "CoreKeyListenerButtonWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"
#include "CoreCurrencyButtonWidget.generated.h"

class UCorePriceTagWidget;
class UCurveFloat;

UCLASS(EditInlineNew)
class UCoreCurrencyButtonWidget : public UCoreKeyListenerButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePriceTagWidget* PriceTag;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _chargeToUnlockCurve;

	UPROPERTY(EditAnywhere)
	float _chargeToUnlockDuration;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCurrencyData(const FPriceTagViewData& currencyData);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

	UFUNCTION(BlueprintPure)
	ECurrencyType GetCurrencyType() const;

public:
	UCoreCurrencyButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyButtonWidget) { return 0; }
