#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "StoreFeaturedChapterPackViewData.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UStoreFeaturedChapterPackViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient)
	FSoftRemoteContentCacheObjectPtr Image;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient)
	FText Title;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient)
	FString AssociatedDlcId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient)
	bool IsOwned;

public:
	UStoreFeaturedChapterPackViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreFeaturedChapterPackViewData) { return 0; }
