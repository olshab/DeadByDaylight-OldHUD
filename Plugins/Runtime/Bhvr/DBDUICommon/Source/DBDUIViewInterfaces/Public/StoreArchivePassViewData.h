#pragma once

#include "CoreMinimal.h"
#include "StoreArchivePassViewData.generated.h"

USTRUCT(BlueprintType)
struct FStoreArchivePassViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	FString PassId;

	UPROPERTY(BlueprintReadWrite, Transient)
	FName ArchiveId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool IsOwned;

public:
	DBDUIVIEWINTERFACES_API FStoreArchivePassViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreArchivePassViewData) { return 0; }
