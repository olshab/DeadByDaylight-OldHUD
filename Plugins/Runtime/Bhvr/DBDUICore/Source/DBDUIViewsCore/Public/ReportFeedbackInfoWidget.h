#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ReportFeedbackData.h"
#include "ReportFeedbackInfoWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UReportFeedbackInfoWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* BanTimestampTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* ReasonTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const FReportFeedbackData& reportData);

public:
	UReportFeedbackInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UReportFeedbackInfoWidget) { return 0; }
