#pragma once

#include "CoreMinimal.h"
#include "EStoreItemLayout.generated.h"

UENUM(BlueprintType)
enum class EStoreItemLayout : uint8
{
	None,
	OwnedTag,
	LockedTag,
	TimerTags = 4,
	PriceTags = 8,
	EventCheckmarkTag = 16,
	EventIconTag = 32,
};
