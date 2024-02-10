#pragma once

#include "CoreMinimal.h"
#include "StoreCharactersSelectionViewData.generated.h"

class UStoreCharacterItemViewData;

USTRUCT(BlueprintType)
struct FStoreCharactersSelectionViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCharacterItemViewData*> Characters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SelectedCharacterIndex;

public:
	DBDUIVIEWINTERFACES_API FStoreCharactersSelectionViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCharactersSelectionViewData) { return 0; }
