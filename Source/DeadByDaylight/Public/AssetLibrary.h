#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetLibrary.generated.h"

class UObjectLibrary;

UCLASS()
class DEADBYDAYLIGHT_API UAssetLibrary : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UObjectLibrary* _objectLibrary;

	UPROPERTY()
	float SecondsDelayBetweenBatch;

public:
	UAssetLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UAssetLibrary) { return 0; }
