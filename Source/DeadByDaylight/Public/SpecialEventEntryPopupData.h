#pragma once

#include "CoreMinimal.h"
#include "SpecialEventDetailsTabData.h"
#include "SpecialEventEntryPopupData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventEntryPopupData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText Title;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	TArray<FName> AdditionalStoreItemIds;

	UPROPERTY(EditAnywhere)
	TArray<FName> AdditionalStoreEventsIds;

	UPROPERTY(EditAnywhere)
	TArray<FName> StoreItemIdPriorityOrdering;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseDetailsTab;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSpecialEventDetailsTabData DetailsTabData;

public:
	DEADBYDAYLIGHT_API FSpecialEventEntryPopupData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventEntryPopupData) { return 0; }
