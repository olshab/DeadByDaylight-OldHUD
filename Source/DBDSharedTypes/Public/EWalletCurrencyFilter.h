#pragma once

#include "CoreMinimal.h"
#include "EWalletCurrencyFilter.generated.h"

UENUM(BlueprintType)
enum class EWalletCurrencyFilter : uint8
{
	None,
	BloodPoints,
	FearTokens,
	Cells = 4,
	EventCurrency = 8,
};
