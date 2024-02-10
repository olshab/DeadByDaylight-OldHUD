#pragma once

#include "CoreMinimal.h"
#include "EOriginWidgetState.generated.h"

UENUM(BlueprintType)
enum class EOriginWidgetState : uint8
{
	None,
	CurrencyPurchase,
	Store,
	Archives,
	Gameplay,
	MilestonePoints,
};
