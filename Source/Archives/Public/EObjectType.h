#pragma once

#include "CoreMinimal.h"
#include "EObjectType.generated.h"

UENUM(BlueprintType)
enum class EObjectType : uint8
{
	None,
	Generator,
	Pallet,
	Totem,
	Window,
	EscapeDoor,
	Count,
};
