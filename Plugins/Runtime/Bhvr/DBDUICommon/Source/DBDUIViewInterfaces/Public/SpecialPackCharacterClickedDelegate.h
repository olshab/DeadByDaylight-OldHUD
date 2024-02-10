#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "SpecialPackCharacterClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialPackCharacterClickedDelegate, const FStoreRedirectionData&, redirectionData);
