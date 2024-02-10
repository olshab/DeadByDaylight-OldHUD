#pragma once

#include "CoreMinimal.h"
#include "ELockedElementType.generated.h"

UENUM(BlueprintType)
enum class ELockedElementType : uint8
{
	Default,
	MainMenuButton,
	FooterButton,
};
