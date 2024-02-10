#pragma once

#include "CoreMinimal.h"
#include "AntiCampSelfUnhookMeterViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "EAntiCampSelfUnhookMeterState.h"
#include "CoreHudAntiCampSelfUnhookMeterWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudAntiCampSelfUnhookMeterWidget : public UCoreBaseHudWidget, public IAntiCampSelfUnhookMeterViewInterface
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualState(const EAntiCampSelfUnhookMeterState newState);

	UFUNCTION(BlueprintPure)
	EAntiCampSelfUnhookMeterState GetState() const;

	UFUNCTION(BlueprintPure)
	float GetProgress() const;

	UFUNCTION(BlueprintPure)
	EAntiCampSelfUnhookMeterState GetPreviousState() const;

public:
	UCoreHudAntiCampSelfUnhookMeterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudAntiCampSelfUnhookMeterWidget) { return 0; }
