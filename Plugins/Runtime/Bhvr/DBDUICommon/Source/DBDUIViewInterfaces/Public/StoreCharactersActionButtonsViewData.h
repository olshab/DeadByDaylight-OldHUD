#pragma once

#include "CoreMinimal.h"
#include "EStoreCharactersActionButtonState.h"
#include "PriceTagViewData.h"
#include "StoreCharactersActionButtonsViewData.generated.h"

USTRUCT(BlueprintType)
struct FStoreCharactersActionButtonsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState UnlockState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState EquipState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState EquipAllState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState SelectAllState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState SeePackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceTagViewData> PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText PackName;

public:
	DBDUIVIEWINTERFACES_API FStoreCharactersActionButtonsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCharactersActionButtonsViewData) { return 0; }
