#pragma once

#include "CoreMinimal.h"
#include "EventDetailsViewInterface.h"
#include "CoreTabContentWidget.h"
#include "EventEntryPopupSkinUIData.h"
#include "EDetailsTabLayout.h"
#include "EventEntryDetailsTabWidget.generated.h"

class UEventEntryDetailsTabLayoutWidget;

UCLASS(EditInlineNew)
class UEventEntryDetailsTabWidget : public UCoreTabContentWidget, public IEventDetailsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	FEventEntryPopupSkinUIData _skinData;

	UPROPERTY(BlueprintReadWrite, Export)
	TMap<EDetailsTabLayout, UEventEntryDetailsTabLayoutWidget*> LayoutWidgetsMap;

public:
	UEventEntryDetailsTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryDetailsTabWidget) { return 0; }
