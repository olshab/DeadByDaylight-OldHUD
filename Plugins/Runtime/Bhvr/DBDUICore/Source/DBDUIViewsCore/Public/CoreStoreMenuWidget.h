#pragma once

#include "CoreMinimal.h"
#include "StoreMenuViewInterface.h"
#include "StoreRedeemCodeButtonDelegate.h"
#include "CoreBaseUserWidget.h"
#include "StoreMenuBackActionDelegate.h"
#include "StoreGetAuricCellsButtonDelegate.h"
#include "StoreMenuTabSelectedDelegate.h"
#include "CoreStoreMenuWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreKeyListenerButtonWidget;
class UCoreInputSwitcherWidget;
class UCoreButtonWidget;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreMenuWidget : public UCoreBaseUserWidget, public IStoreMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Export)
	UCoreTabContainerWidget* StoreMenuTabs;

	UPROPERTY(Export)
	UCoreKeyListenerButtonWidget* RedeemCodeButton;

	UPROPERTY(Export)
	UCoreKeyListenerButtonWidget* GetAuricCellsButton;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* BackInputSwitcher;

protected:
	UPROPERTY()
	FStoreMenuTabSelectedDelegate _menuTabSelectedDelegate;

	UPROPERTY()
	FStoreMenuBackActionDelegate _backActionDelegate;

	UPROPERTY()
	FStoreRedeemCodeButtonDelegate _redeemCodeButtonDelegate;

	UPROPERTY()
	FStoreGetAuricCellsButtonDelegate _getAuricCellsButtonDelegate;

protected:
	UFUNCTION()
	void OnRedeemCodeButtonClicked(UCoreButtonWidget* selectedButton);

	UFUNCTION()
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnGetAuricCellsClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void OnBackAction();

public:
	UCoreStoreMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreMenuWidget) { return 0; }
