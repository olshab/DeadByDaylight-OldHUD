#pragma once

#include "CoreMinimal.h"
#include "EDBDFeatureType.generated.h"

UENUM(BlueprintType)
enum class EDBDFeatureType : uint8
{
	None,
	Archives,
	DailyRituals,
	CustomGame,
	Bloodweb,
	Offerings,
	Items,
	Addons,
	EventStore,
	LTE,
};
