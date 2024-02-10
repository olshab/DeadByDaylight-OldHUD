#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "StoreChapterPackViewData.generated.h"

class UTexture2D;
class UStoreCharacterItemViewData;
class UStoreCustomizationItemViewData;

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UStoreChapterPackViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString Id;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText DisplayTitle;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString HeritagePackId;

	UPROPERTY(BlueprintReadOnly, Transient)
	TSoftObjectPtr<UTexture2D> PackImage;

	UPROPERTY(BlueprintReadWrite, Transient)
	TArray<UStoreCharacterItemViewData*> CharactersData;

	UPROPERTY(BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> CustomizationsData;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 SortOrder;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsNew;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsOwned;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsIndividuallyAvailable;

public:
	UStoreChapterPackViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreChapterPackViewData) { return 0; }
