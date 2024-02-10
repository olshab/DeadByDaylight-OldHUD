#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionsViewInterface.h"
#include "CoreStoreBaseSubTabsWidget.h"
#include "CoreStoreCollectionsWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreStoreCollectionsWidget : public UCoreStoreBaseSubTabsWidget, public IStoreCollectionsViewInterface
{
	GENERATED_BODY()

public:
	UCoreStoreCollectionsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsWidget) { return 0; }
