#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "StoreCharactersFiltersData.generated.h"

USTRUCT(BlueprintType)
struct FStoreCharactersFiltersData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	bool IsFavorite;

	UPROPERTY(EditInstanceOnly)
	bool IsOwned;

private:
	UPROPERTY(EditInstanceOnly, Transient)
	TMap<EItemRarity, bool> _rarityFiltersMap;

public:
	DBDUIVIEWINTERFACES_API FStoreCharactersFiltersData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCharactersFiltersData) { return 0; }
