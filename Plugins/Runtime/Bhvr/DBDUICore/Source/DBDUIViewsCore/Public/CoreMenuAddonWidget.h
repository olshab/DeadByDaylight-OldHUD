#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.h"
#include "CoreMenuAddonWidget.generated.h"

class UDBDImage;
class UMenuAddonViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuAddonWidget : public UCoreMenuLoadoutPartWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* DisabledState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _addonInventoryScale;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateWidgetScale();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetWhitePlusIconVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable)
	void SetMenuAddonTooltipData(const FLoadoutTooltipData& tooltipData);

	UFUNCTION(BlueprintCallable)
	void SetMenuAddonData(const UMenuAddonViewData* data);

	UFUNCTION(BlueprintCallable)
	void SetAddonDisabled(bool isParentAvailable);

	UFUNCTION(BlueprintCallable)
	FText GetWidgetParentDisplayName();

public:
	UCoreMenuAddonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuAddonWidget) { return 0; }
