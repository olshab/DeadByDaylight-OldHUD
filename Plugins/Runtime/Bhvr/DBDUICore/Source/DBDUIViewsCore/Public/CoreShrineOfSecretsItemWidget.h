#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ShrineOfSecretsPurchaseButtonClickedDelegate.h"
#include "ShrineOfSecretsItemViewData.h"
#include "CoreShrineOfSecretsItemWidget.generated.h"

class UDBDImage;
class UCoreButtonWidget;
class UDBDRichTextBlock;
class UCoreMenuPerkWidget;
class UDBDTextBlock;
class UCoreCurrencyButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreShrineOfSecretsItemWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FShrineOfSecretsPurchaseButtonClickedDelegate PurchaseButtonClickedDelegate;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* Perk;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* CheckmarkIMG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* PerkNameTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* CharacterNameTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* BPConversionRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* DescriptionRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreCurrencyButtonWidget* CurrencyButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* PerkMaxedTB;

private:
	UFUNCTION()
	void ShowPerkTooltip(UCoreButtonWidget* hoveredSlotWidget);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVisuals(const FShrineOfSecretsItemViewData& shrineOfSecretsItemViewData);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlayUnlockAnimation();

private:
	UFUNCTION()
	void OnPurchaseButtonClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void HidePerkTooltip(UCoreButtonWidget* unhoveredSlotWidget);

public:
	UCoreShrineOfSecretsItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreShrineOfSecretsItemWidget) { return 0; }
