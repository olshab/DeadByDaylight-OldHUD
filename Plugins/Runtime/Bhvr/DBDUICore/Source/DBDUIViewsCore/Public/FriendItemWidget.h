#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "FriendItemWidget.generated.h"

class UDBDRichTextBlock;
class UDBDImage;

UCLASS(EditInlineNew)
class UFriendItemWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* PlayerNameText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* StatusText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* InviteIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* CrossplayIcon;

public:
	UFriendItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UFriendItemWidget) { return 0; }
