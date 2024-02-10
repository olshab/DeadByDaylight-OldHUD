#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "ReportFeedbackPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UReportFeedbackPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	UReportFeedbackPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UReportFeedbackPopupPresenter) { return 0; }
