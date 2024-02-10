#pragma once

#include "CoreMinimal.h"
#include "EPlayerFilter.generated.h"

UENUM(BlueprintType)
enum class EPlayerFilter : uint8
{
	Self,
	AnyFriend,
	AnyOpponent,
};
