#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "StoreCategoryViewData.h"
#include "ECustomizationCategory.h"
#include "CoreStoreCategoryWidget.generated.h"

class UCoreOnHoverBorderWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCategoryWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(Transient)
	ECustomizationCategory _category;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreCategoryViewData& data);

public:
	UCoreStoreCategoryWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCategoryWidget) { return 0; }
