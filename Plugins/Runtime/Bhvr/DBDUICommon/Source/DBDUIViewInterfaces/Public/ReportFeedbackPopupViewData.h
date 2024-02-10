#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "ReportFeedbackPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UReportFeedbackPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UReportFeedbackPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UReportFeedbackPopupViewData) { return 0; }
