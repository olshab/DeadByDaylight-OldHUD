#pragma once

#include "CoreMinimal.h"
#include "UnlockPersonalPerksPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "CoreUnlockPersonalPerksPopupWidget.generated.h"

class UCoreMenuPerkWidget;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreUnlockPersonalPerksPopupWidget : public UCoreGenericPopupWidget, public IUnlockPersonalPerksPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UCoreMenuPerkWidget*> _perkArray;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* FirstPerk;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* SecondPerk;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* ThirdPerk;

private:
	UFUNCTION(BlueprintCallable)
	void ShowMenuPerkTooltip(UCoreButtonWidget* hoveredSlotWidget);

	UFUNCTION(BlueprintCallable)
	void HideMenuPerkTooltip(UCoreButtonWidget* unhoveredSlotWidget);

public:
	UCoreUnlockPersonalPerksPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreUnlockPersonalPerksPopupWidget) { return 0; }
