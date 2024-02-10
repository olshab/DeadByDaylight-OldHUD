#pragma once

#include "CoreMinimal.h"
#include "EStoreSpecialPackActivationType.h"
#include "UObject/NoExportTypes.h"
#include "StoreSpecialPackActivation.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialPackActivation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EStoreSpecialPackActivationType Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDateTime StartDate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDateTime EndDate;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackActivation();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackActivation) { return 0; }
