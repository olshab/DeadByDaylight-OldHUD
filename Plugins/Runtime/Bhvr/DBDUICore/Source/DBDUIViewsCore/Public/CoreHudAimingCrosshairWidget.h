#pragma once

#include "CoreMinimal.h"
#include "HudAimingCrosshairViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "EAimingCrosshairState.h"
#include "CoreHudAimingCrosshairWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudAimingCrosshairWidget : public UCoreBaseHudWidget, public IHudAimingCrosshairViewInterface
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	EAimingCrosshairState GetState() const;

	UFUNCTION(BlueprintPure)
	float GetProgress() const;

	UFUNCTION(BlueprintPure)
	EAimingCrosshairState GetPreviousState() const;

public:
	UCoreHudAimingCrosshairWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudAimingCrosshairWidget) { return 0; }
