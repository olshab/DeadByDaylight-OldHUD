#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "HexBloodFavor.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexBloodFavor : public UHexPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _palletInRange;

	UPROPERTY(EditDefaultsOnly)
	float _palletPulldownBlockTime;

public:
	UFUNCTION(BlueprintPure)
	float GetPalletPulldownBlockTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetPalletInRangeAtLevel() const;

public:
	UHexBloodFavor();
};

FORCEINLINE uint32 GetTypeHash(const UHexBloodFavor) { return 0; }
