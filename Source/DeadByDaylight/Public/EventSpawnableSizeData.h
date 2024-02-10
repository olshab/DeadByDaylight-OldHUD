#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EventSpawnableSizeData.generated.h"

USTRUCT()
struct FEventSpawnableSizeData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName SizeType;

	UPROPERTY(EditAnywhere)
	float MinVolume;

	UPROPERTY(EditAnywhere)
	float MaxVolume;

	UPROPERTY(EditAnywhere)
	float Budget;

public:
	DEADBYDAYLIGHT_API FEventSpawnableSizeData();
};

FORCEINLINE uint32 GetTypeHash(const FEventSpawnableSizeData) { return 0; }
