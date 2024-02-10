#pragma once

#include "CoreMinimal.h"
#include "EFlagType.generated.h"

UENUM(BlueprintType)
enum class EFlagType : uint8
{
	Sale,
	Limited,
	ArchiveRift,
};
