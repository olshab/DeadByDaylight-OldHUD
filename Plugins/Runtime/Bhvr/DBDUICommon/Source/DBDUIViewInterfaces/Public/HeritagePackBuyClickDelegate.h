#pragma once

#include "CoreMinimal.h"
#include "HeritagePackBuyClickDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeritagePackBuyClickDelegate, const FString&, packId);
