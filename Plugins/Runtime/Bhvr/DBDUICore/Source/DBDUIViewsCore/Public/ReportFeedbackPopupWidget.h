#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReportFeedbackPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "ReportFeedbackPopupWidget.generated.h"

class UReportFeedbackInfoWidget;
class UDBDScrollBox;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UReportFeedbackPopupWidget : public UCoreGenericPopupWidget, public IReportFeedbackPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UReportFeedbackInfoWidget> InfoWidgetClass;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* BanTimestampSubtitleTB;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* ReasonSubtitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDScrollBox* ReportFeedbackInfoScrollBox;

public:
	UReportFeedbackPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UReportFeedbackPopupWidget) { return 0; }
