#pragma once

#include "CoreMinimal.h"
#include "EPlayerProfileFilter.generated.h"

UENUM(BlueprintType)
enum class EPlayerProfileFilter : uint8
{
	Wallet = 1,
	PlayerName,
	PlayerCard = 4,
	ZeroEntry = 0,
};
