#pragma once

#include "CoreMinimal.h"
#include "ENearGameObjectQuestObjectType.generated.h"

UENUM(BlueprintType)
enum class ENearGameObjectQuestObjectType : uint8
{
	Generator,
	Pallet,
	Chest,
	Totem,
	Window,
	Wall,
	K32ItemBox,
	Killer,
	VaultLocation,
	Count,
};
