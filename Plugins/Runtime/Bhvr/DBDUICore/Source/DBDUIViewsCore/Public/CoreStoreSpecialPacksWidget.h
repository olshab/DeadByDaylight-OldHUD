#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPacksViewInterface.h"
#include "CoreStoreBaseSubTabsWidget.h"
#include "CoreStoreSpecialPacksWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreStoreSpecialPacksWidget : public UCoreStoreBaseSubTabsWidget, public IStoreSpecialPacksViewInterface
{
	GENERATED_BODY()

public:
	UCoreStoreSpecialPacksWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPacksWidget) { return 0; }
