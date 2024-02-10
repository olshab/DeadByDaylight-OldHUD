#pragma once

#include "CoreMinimal.h"
#include "EUIPanelTab.generated.h"

UENUM(BlueprintType)
enum class EUIPanelTab : uint8
{
	CHARACTERS_LIST,
	LOADOUT,
	BLOODWEB,
	CUSTOMIZE,
	LOBBY,
};
