#pragma once

#include "CoreMinimal.h"
#include "HudEventProgression2023ViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreHudEventProgression2023Widget.generated.h"

UCLASS(EditInlineNew)
class UCoreHudEventProgression2023Widget : public UCoreBaseHudWidget, public IHudEventProgression2023ViewInterface
{
	GENERATED_BODY()

public:
	UCoreHudEventProgression2023Widget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudEventProgression2023Widget) { return 0; }
