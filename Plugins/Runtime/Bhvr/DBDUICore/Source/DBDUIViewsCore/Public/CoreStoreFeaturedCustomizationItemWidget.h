#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "OnMoveToCharactersCustomizationPageButtonClickedDelegate.h"
#include "CoreStoreFeaturedCustomizationItemWidget.generated.h"

class UStoreCustomizationItemViewData;
class UUITweenInstance;

UCLASS(EditInlineNew)
class UCoreStoreFeaturedCustomizationItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FOnMoveToCharactersCustomizationPageButtonClickedDelegate OnMoveToCharactersCustomizationPageButtonClickedDelegate;

private:
	UFUNCTION()
	void UpdateSize(UUITweenInstance* tween);

	UFUNCTION()
	void UpdatePosition(UUITweenInstance* tween);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCustomizationData(UStoreCustomizationItemViewData* customizationItemViewData);

public:
	UCoreStoreFeaturedCustomizationItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedCustomizationItemWidget) { return 0; }
