#pragma once

#include "CoreMinimal.h"
#include "ECharacterCameraViewType.generated.h"

UENUM(BlueprintType)
enum class ECharacterCameraViewType : uint8
{
	None,
	Character,
	Outfit,
};
