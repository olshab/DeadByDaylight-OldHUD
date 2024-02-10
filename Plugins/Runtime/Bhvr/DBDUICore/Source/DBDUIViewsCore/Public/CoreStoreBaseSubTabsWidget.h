#pragma once

#include "CoreMinimal.h"
#include "StoreBaseSubTabsViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "StoreSubTabSelectedDelegate.h"
#include "CoreStoreBaseSubTabsWidget.generated.h"

class UCoreSelectableButtonWidget;
class UCoreTabContainerWidget;
class UWidgetSwitcher;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class UCoreStoreBaseSubTabsWidget : public UCoreBaseUserWidget, public IStoreBaseSubTabsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	FStoreSubTabSelectedDelegate _menuTabSelectedDelegate;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UCoreTabContainerWidget* SubTabsContainer;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* TabContentSwitcher;

protected:
	UFUNCTION()
	void OnSubTabSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UWidget* GetSubTabContentForTab(int32 subTabId);

public:
	UCoreStoreBaseSubTabsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreBaseSubTabsWidget) { return 0; }
