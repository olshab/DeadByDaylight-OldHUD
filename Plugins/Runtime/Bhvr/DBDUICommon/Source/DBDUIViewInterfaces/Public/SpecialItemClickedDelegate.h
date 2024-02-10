#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "SpecialItemClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialItemClickedDelegate, const FStoreRedirectionData&, redirectionData);
