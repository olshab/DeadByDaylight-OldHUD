#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S35P01.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API US35P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _fastVaultsTimeSeconds;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownDurationSeconds;

public:
	UFUNCTION(BlueprintPure)
	float GetFastVaultsTimeSecondsAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownDurationSeconds() const;

public:
	US35P01();
};

FORCEINLINE uint32 GetTypeHash(const US35P01) { return 0; }
