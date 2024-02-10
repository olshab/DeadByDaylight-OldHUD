#pragma once

#include "CoreMinimal.h"
#include "EFatherKeyCardState.generated.h"

UENUM(BlueprintType)
enum class EFatherKeyCardState : uint8
{
	None,
	Undiscovered,
	Discovered,
	Secured,
};
