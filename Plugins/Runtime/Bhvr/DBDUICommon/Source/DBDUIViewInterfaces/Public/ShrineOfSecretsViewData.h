#pragma once

#include "CoreMinimal.h"
#include "ShrineOfSecretsItemViewData.h"
#include "UObject/NoExportTypes.h"
#include "ShrineOfSecretsViewData.generated.h"

USTRUCT(BlueprintType)
struct FShrineOfSecretsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FDateTime OfferDate;

	UPROPERTY(BlueprintReadOnly)
	FDateTime EndDate;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FShrineOfSecretsItemViewData> ItemsViewData;

public:
	DBDUIVIEWINTERFACES_API FShrineOfSecretsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FShrineOfSecretsViewData) { return 0; }
