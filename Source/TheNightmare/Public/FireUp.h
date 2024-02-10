#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FireUp.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UFireUp : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _speedBonuses;

public:
	UFUNCTION(BlueprintPure)
	float GetSpeedBonusAtLevel() const;

public:
	UFireUp();
};

FORCEINLINE uint32 GetTypeHash(const UFireUp) { return 0; }
