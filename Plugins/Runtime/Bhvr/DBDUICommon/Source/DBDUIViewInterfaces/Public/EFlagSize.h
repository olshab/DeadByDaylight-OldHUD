#pragma once

#include "CoreMinimal.h"
#include "EFlagSize.generated.h"

UENUM(BlueprintType)
enum class EFlagSize : uint8
{
	Short,
	Medium,
	Large,
	Preview,
};
