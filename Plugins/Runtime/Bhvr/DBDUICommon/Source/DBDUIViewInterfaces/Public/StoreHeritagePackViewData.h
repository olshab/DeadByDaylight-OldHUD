#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "StoreHeritagePackViewData.generated.h"

class UTexture2D;
class UStoreChapterPackViewData;

USTRUCT(BlueprintType)
struct FStoreHeritagePackViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	FString HeritageId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	TSoftObjectPtr<UTexture2D> PackImage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	TArray<UStoreChapterPackViewData*> ChapterPacks;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool IsOwned;

public:
	DBDUIVIEWINTERFACES_API FStoreHeritagePackViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreHeritagePackViewData) { return 0; }
