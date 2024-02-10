#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "OutOfWorldTileData.generated.h"

class ATile;

USTRUCT(BlueprintType)
struct FOutOfWorldTileData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditInstanceOnly)
	FVector _spawnLocation;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<ATile> _tileClass;

public:
	DEADBYDAYLIGHT_API FOutOfWorldTileData();
};

FORCEINLINE uint32 GetTypeHash(const FOutOfWorldTileData) { return 0; }
