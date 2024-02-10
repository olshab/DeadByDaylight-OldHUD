#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S39P03.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US39P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _perkCooldownTime;

public:
	UFUNCTION(BlueprintPure)
	float GetCooldownTimeAtLevel() const;

public:
	US39P03();
};

FORCEINLINE uint32 GetTypeHash(const US39P03) { return 0; }
