#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CustomizationItemPreviewAreaViewData.h"
#include "ECustomizationCategory.h"
#include "CoreImagePreviewAreaWidget.generated.h"

class UDBDImage;
class UDBDRichTextBlock;
class UCorePlayerCardWidget;
class UStoreCustomizationItemViewData;
class UCustomizationItemGridContainer;

UCLASS(EditInlineNew)
class UCoreImagePreviewAreaWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* PreviewArea;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePlayerCardWidget* AnimatedCardContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* PreviewAreaBG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ItemContainerText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizationItemGridContainer* ItemContainer;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowBGImage();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetPreviewContainerVisual(const ECustomizationCategory customizationCategory);

	UFUNCTION(BlueprintCallable)
	void SetData(const FCustomizationItemPreviewAreaViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAnimatedPreviewData(const UStoreCustomizationItemViewData* previewItemData);

protected:
	UFUNCTION()
	void OnItemClicked(const int32 selectedIndex);

public:
	UCoreImagePreviewAreaWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreImagePreviewAreaWidget) { return 0; }
