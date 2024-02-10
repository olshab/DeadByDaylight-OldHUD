#pragma once

#include "CoreMinimal.h"
#include "StoreCharactersFiltersData.h"
#include "OnStoreFiltersChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStoreFiltersChangedDelegate, const FStoreCharactersFiltersData&, storeFiltersData);
