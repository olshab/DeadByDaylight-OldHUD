#pragma once

#include "CoreMinimal.h"
#include "EMenuOpened.generated.h"

UENUM(BlueprintType)
enum class EMenuOpened : uint8
{
	MainMenu,
	PlaySubMenu,
	LTESubMenu,
};
