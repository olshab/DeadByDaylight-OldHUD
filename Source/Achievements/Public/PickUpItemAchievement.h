#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "EPlayerRole.h"
#include "PickUpItemAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UPickUpItemAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _statName;

	UPROPERTY(EditDefaultsOnly)
	bool _triggerOnNormalItem;

	UPROPERTY(EditDefaultsOnly)
	bool _triggerOnSpecialItem;

	UPROPERTY(EditDefaultsOnly)
	bool _triggerOnCursedItem;

	UPROPERTY(EditDefaultsOnly)
	EPlayerRole _targetPlayerRole;

public:
	UPickUpItemAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UPickUpItemAchievement) { return 0; }
