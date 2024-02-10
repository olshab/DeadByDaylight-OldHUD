#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CustomIconPathExclusionUIDataRow.generated.h"

USTRUCT(BlueprintType)
struct FCustomIconPathExclusionUIDataRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Path;

public:
	DBDUIVIEWINTERFACES_API FCustomIconPathExclusionUIDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FCustomIconPathExclusionUIDataRow) { return 0; }
