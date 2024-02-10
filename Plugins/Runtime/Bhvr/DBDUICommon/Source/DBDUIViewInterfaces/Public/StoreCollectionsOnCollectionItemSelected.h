#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionsOnCollectionItemSelected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStoreCollectionsOnCollectionItemSelected, const FString&, collectionId, FName, selectedCustomizationItemId);
