#pragma once

#include "CoreMinimal.h"
#include "EventEntryRewardsTabWidget.h"
#include "EventEntryStoreTabWidget.generated.h"

UCLASS(EditInlineNew)
class UEventEntryStoreTabWidget : public UEventEntryRewardsTabWidget
{
	GENERATED_BODY()

public:
	UEventEntryStoreTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryStoreTabWidget) { return 0; }
