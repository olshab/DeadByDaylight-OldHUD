#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionsOnCollectionFocused.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreCollectionsOnCollectionFocused, const FString&, collectionId);
