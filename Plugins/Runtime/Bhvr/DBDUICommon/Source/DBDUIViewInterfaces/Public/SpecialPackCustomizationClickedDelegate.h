#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "SpecialPackCustomizationClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialPackCustomizationClickedDelegate, const FStoreRedirectionData&, redirectionData);
