#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "SpecialEventDetailsTabContentData.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventEntryDetailsTabContentWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class UEventEntryDetailsTabContentWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* DescriptionText;

	UPROPERTY(BlueprintReadOnly)
	FText _scrollLabelText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FSpecialEventDetailsTabContentData& contentData, const FEventEntryPopupSkinUIData& skinData);

public:
	UEventEntryDetailsTabContentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryDetailsTabContentWidget) { return 0; }
