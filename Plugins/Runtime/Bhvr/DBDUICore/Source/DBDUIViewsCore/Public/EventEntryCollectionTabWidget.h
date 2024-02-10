#pragma once

#include "CoreMinimal.h"
#include "EventEntryRewardsTabWidget.h"
#include "EventEntryCollectionTabWidget.generated.h"

UCLASS(EditInlineNew)
class UEventEntryCollectionTabWidget : public UEventEntryRewardsTabWidget
{
	GENERATED_BODY()

public:
	UEventEntryCollectionTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryCollectionTabWidget) { return 0; }
