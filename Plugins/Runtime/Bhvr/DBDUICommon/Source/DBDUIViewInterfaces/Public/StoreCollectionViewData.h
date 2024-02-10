#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "StoreCollectionViewData.generated.h"

class UStoreCustomizationItemViewData;
class UFileMediaSource;

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UStoreCollectionViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString CollectionId;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString DisplayTitle;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString DisplaySubtitle;

	UPROPERTY(BlueprintReadOnly, Transient)
	FDateTime LimitedAvailabilityStartDate;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool VisibleBeforeStartDate;

	UPROPERTY(BlueprintReadOnly, Transient)
	FDateTime LimitedAvailabilityEndDate;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool VisibleAfterEndDate;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 SortOrder;

	UPROPERTY(BlueprintReadOnly, Transient)
	FSoftRemoteContentCacheObjectPtr HeroImage;

	UPROPERTY(BlueprintReadOnly, Transient)
	TSoftObjectPtr<UFileMediaSource> HeroVideo;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FSoftRemoteContentCacheObjectPtr> AdditionalImages;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsNew;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<UStoreCustomizationItemViewData*> Items;

public:
	UFUNCTION(BlueprintPure)
	bool IsSpecial() const;

	UFUNCTION(BlueprintPure)
	bool IsCollectionHidden() const;

	UFUNCTION(BlueprintPure)
	bool IsCollectionActive() const;

	UFUNCTION(BlueprintPure)
	bool HasHeroVideo() const;

	UFUNCTION(BlueprintPure)
	bool HasHeroImage() const;

public:
	UStoreCollectionViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionViewData) { return 0; }
