#pragma once

#include "CoreMinimal.h"
#include "KillerDamagedSurvivorBaseAchievement.h"
#include "KillerDamagedSurvivorHoldingItemAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UKillerDamagedSurvivorHoldingItemAchievement : public UKillerDamagedSurvivorBaseAchievement
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _statName;

	UPROPERTY(EditDefaultsOnly)
	bool _allowBaseItemsInCount;

	UPROPERTY(EditDefaultsOnly)
	bool _allowSpecialItemsInCount;

	UPROPERTY(EditDefaultsOnly)
	bool _allowCursedItemsInCount;

public:
	UKillerDamagedSurvivorHoldingItemAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKillerDamagedSurvivorHoldingItemAchievement) { return 0; }
