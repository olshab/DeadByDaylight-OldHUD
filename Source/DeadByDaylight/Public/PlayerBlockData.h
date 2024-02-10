#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerBlockData.generated.h"

class ADBDPlayer;

USTRUCT()
struct FPlayerBlockData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	ADBDPlayer* BlockedPlayer;

	UPROPERTY(Transient)
	FGameplayTag BlockStyle;

public:
	DEADBYDAYLIGHT_API FPlayerBlockData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerBlockData) { return 0; }
