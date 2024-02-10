#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "OnFeaturedCharacterClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFeaturedCharacterClickedDelegate, const FStoreRedirectionData&, redirectionData);
