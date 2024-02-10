#pragma once

#include "CoreMinimal.h"
#include "SaveDataBase.h"
#include "SeenStoreItemsSaved.generated.h"

USTRUCT()
struct FSeenStoreItemsSaved: public FSaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FString NewStoreItemsStartDate;

	UPROPERTY(SaveGame)
	TArray<FString> SeenNewStoreItems;

public:
	DEADBYDAYLIGHT_API FSeenStoreItemsSaved();
};

FORCEINLINE uint32 GetTypeHash(const FSeenStoreItemsSaved) { return 0; }
