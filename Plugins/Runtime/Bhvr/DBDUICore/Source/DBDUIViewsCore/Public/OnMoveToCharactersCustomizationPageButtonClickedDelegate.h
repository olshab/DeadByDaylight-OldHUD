#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "OnMoveToCharactersCustomizationPageButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToCharactersCustomizationPageButtonClickedDelegate, const FStoreRedirectionData&, redirectionData);
