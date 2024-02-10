#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ECurrencyType.h"
#include "Templates/SubclassOf.h"
#include "CurrencyLabelViewData.h"
#include "PlayerProfileCurrencyClickedDelegate.h"
#include "CoreWalletWidget.generated.h"

class UGridPanel;
class UCoreCurrencyLabelWidget;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreWalletWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreCurrencyLabelWidget> CoreCurrencyLabelWidgetClass;

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* CurrencyContainer;

private:
	UPROPERTY(Transient, Export)
	TMap<ECurrencyType, UCoreCurrencyLabelWidget*> _currencyWidgetMap;

	UPROPERTY()
	FPlayerProfileCurrencyClickedDelegate _currencyClickedDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateCurrency(const ECurrencyType type, int32 newBalance, int32 previousBalance);

	UFUNCTION(BlueprintCallable)
	void PlayNotEnoughCurrency(const ECurrencyType type);

private:
	UFUNCTION()
	void OnCurrencyClicked(UCoreButtonWidget* buttonTarget);

public:
	UFUNCTION(BlueprintCallable)
	void InitWallet(const TArray<FCurrencyLabelViewData>& walletData);

	UFUNCTION(BlueprintCallable)
	void FullUpdateCurrency(const FCurrencyLabelViewData& viewData);

public:
	UCoreWalletWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreWalletWidget) { return 0; }
