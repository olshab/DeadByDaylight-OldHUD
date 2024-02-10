#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReportFeedbackData.generated.h"

USTRUCT(BlueprintType)
struct FReportFeedbackData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FDateTime BanTimestamp;

	UPROPERTY()
	FText Reason;

	UPROPERTY()
	TArray<int64> MessageIds;

	UPROPERTY()
	FString RecipientId;

public:
	DBDSHAREDTYPES_API FReportFeedbackData();
};

FORCEINLINE uint32 GetTypeHash(const FReportFeedbackData) { return 0; }
