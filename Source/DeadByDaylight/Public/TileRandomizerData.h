#pragma once

#include "CoreMinimal.h"
#include "TileRandomizerData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTileRandomizerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Minimun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Maximun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> Elements;

public:
	DEADBYDAYLIGHT_API FTileRandomizerData();
};

FORCEINLINE uint32 GetTypeHash(const FTileRandomizerData) { return 0; }
