#pragma once

#include "CoreMinimal.h"
#include "EBotReplacementState.generated.h"

UENUM(BlueprintType)
enum class EBotReplacementState : uint8
{
	NotReplacedWithBot,
	BeingReplacedWithBot,
	ReplacedWithBot,
};
