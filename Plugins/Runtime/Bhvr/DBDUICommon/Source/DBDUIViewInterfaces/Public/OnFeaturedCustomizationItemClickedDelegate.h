#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "OnFeaturedCustomizationItemClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFeaturedCustomizationItemClickedDelegate, const FStoreRedirectionData&, redirectionData);
