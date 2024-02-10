#pragma once

#include "CoreMinimal.h"
#include "HudEventProgressionViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreHudEventProgressionWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreHudEventProgressionWidget : public UCoreBaseHudWidget, public IHudEventProgressionViewInterface
{
	GENERATED_BODY()

public:
	UCoreHudEventProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudEventProgressionWidget) { return 0; }
