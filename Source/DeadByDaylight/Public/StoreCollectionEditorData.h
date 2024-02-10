#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTableRowBase.h"
#include "StoreCollectionLimitedAvailabilityStart.h"
#include "StoreCollectionLimitedAvailabilityEnd.h"
#include "StoreCollectionEditorData.generated.h"

USTRUCT()
struct FStoreCollectionEditorData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString CollectionId;

	UPROPERTY(EditAnywhere)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere)
	FText CollectionTitle;

	UPROPERTY(EditAnywhere)
	FText CollectionSubtitle;

	UPROPERTY(EditAnywhere)
	FDateTime DateUpdated;

	UPROPERTY(EditAnywhere)
	bool IsEnabled;

	UPROPERTY(EditAnywhere)
	bool HasLimitedAvailabilityStartDate;

	UPROPERTY(EditAnywhere)
	FStoreCollectionLimitedAvailabilityStart LimitedAvailabilityStart;

	UPROPERTY(EditAnywhere)
	bool HasLimitedAvailabilityEndDate;

	UPROPERTY(EditAnywhere)
	FStoreCollectionLimitedAvailabilityEnd LimitedAvailabilityEnd;

	UPROPERTY(EditAnywhere)
	int32 SortOrder;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath HeroImage;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath HeroVideo;

	UPROPERTY(EditAnywhere)
	TArray<FSoftObjectPath> AdditionalImages;

	UPROPERTY(EditAnywhere)
	TArray<FString> Items;

public:
	DEADBYDAYLIGHT_API FStoreCollectionEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionEditorData) { return 0; }
