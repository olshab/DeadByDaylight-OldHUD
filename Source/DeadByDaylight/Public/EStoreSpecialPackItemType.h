#pragma once

#include "CoreMinimal.h"
#include "EStoreSpecialPackItemType.generated.h"

UENUM(BlueprintType)
enum class EStoreSpecialPackItemType : uint8
{
	Customization,
	Character,
	Currency,
	RiftPass,
};
