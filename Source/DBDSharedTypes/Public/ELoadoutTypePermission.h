#pragma once

#include "CoreMinimal.h"
#include "ELoadoutTypePermission.generated.h"

UENUM(BlueprintType)
enum class ELoadoutTypePermission : uint8
{
	Forbidden,
	Inventory,
	Allowed,
};
