#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PriceTagViewData.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "StoreArchivePassViewData.h"
#include "StoreSpecialPackViewData.generated.h"

class UStoreCustomizationItemViewData;
class UStoreCharacterItemViewData;

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UStoreSpecialPackViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString Id;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString DisplayTitle;

	UPROPERTY(BlueprintReadOnly, Transient)
	FSoftRemoteContentCacheObjectPtr PackImage;

	UPROPERTY(BlueprintReadWrite, Transient)
	FPriceTagViewData PriceTagData;

	UPROPERTY(BlueprintReadWrite, Transient)
	TArray<UStoreCharacterItemViewData*> CharactersData;

	UPROPERTY(BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> CustomizationsData;

	UPROPERTY(BlueprintReadWrite, Transient)
	FStoreArchivePassViewData ArchivePassViewData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FDateTime ActivationStartDate;

	UPROPERTY(BlueprintReadOnly, Transient)
	FDateTime ActivationEndDate;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 SortOrder;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsNew;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsOwned;

public:
	UStoreSpecialPackViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialPackViewData) { return 0; }
