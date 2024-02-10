#pragma once

#include "CoreMinimal.h"
#include "EK33TunnelBlockType.generated.h"

UENUM(BlueprintType)
enum class EK33TunnelBlockType : uint8
{
	None,
	Straight,
	Corner,
	T_Junction,
	CrossJunction,
	DeadEnd,
};
