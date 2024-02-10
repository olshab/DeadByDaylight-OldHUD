#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreCollectionMediaData.h"
#include "StoreCollectionRuntimeData.generated.h"

USTRUCT()
struct FStoreCollectionRuntimeData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString CollectionId;

	UPROPERTY(Transient)
	FString InclusionVersion;

	UPROPERTY(Transient)
	FDateTime UpdatedDate;

	UPROPERTY(Transient)
	TMap<FString, FString> CollectionTitle;

	UPROPERTY(Transient)
	TMap<FString, FString> CollectionSubtitle;

	UPROPERTY(Transient)
	FDateTime LimitedAvailabilityStartDate;

	UPROPERTY(Transient, SkipSerialization)
	bool LimitedAvailabilityStartDate_IsSet;

	UPROPERTY(Transient)
	bool VisibleBeforeStartDate;

	UPROPERTY(Transient, SkipSerialization)
	bool VisibleBeforeStartDate_IsSet;

	UPROPERTY(Transient)
	FDateTime LimitedAvailabilityEndDate;

	UPROPERTY(Transient, SkipSerialization)
	bool LimitedAvailabilityEndDate_IsSet;

	UPROPERTY(Transient)
	bool VisibleAfterEndDate;

	UPROPERTY(Transient, SkipSerialization)
	bool VisibleAfterEndDate_IsSet;

	UPROPERTY(Transient)
	int32 SortOrder;

	UPROPERTY(Transient)
	FStoreCollectionMediaData HeroImage;

	UPROPERTY(Transient)
	FStoreCollectionMediaData HeroVideo;

	UPROPERTY(Transient)
	TArray<FStoreCollectionMediaData> AdditionalImages;

	UPROPERTY(Transient)
	TArray<FString> Items;

public:
	DEADBYDAYLIGHT_API FStoreCollectionRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionRuntimeData) { return 0; }
