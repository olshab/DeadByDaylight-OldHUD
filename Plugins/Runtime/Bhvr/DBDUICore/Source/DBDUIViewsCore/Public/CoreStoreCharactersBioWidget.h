#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersBioViewInterface.h"
#include "CoreStoreCharactersBioWidget.generated.h"

class UDBDRichTextBlock;
class UScrollBox;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersBioWidget : public UCoreBaseUserWidget, public IStoreCharactersBioViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* TextContent;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScrollBox* Scroll;

public:
	UCoreStoreCharactersBioWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersBioWidget) { return 0; }
