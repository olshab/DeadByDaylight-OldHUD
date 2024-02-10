#pragma once

#include "CoreMinimal.h"
#include "EMainMenuButtonTemplate.generated.h"

UENUM(BlueprintType)
enum class EMainMenuButtonTemplate : uint8
{
	Default,
	Navigation,
	SubMenu,
	Event,
};
