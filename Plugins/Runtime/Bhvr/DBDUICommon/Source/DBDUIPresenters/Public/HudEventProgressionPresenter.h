#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudEventProgression2023ViewData.h"
#include "HudEventProgressionPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UHudEventProgressionPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CoreHudEventProgressionWidgetClass;

private:
	UFUNCTION()
	void OnEventProgressionDataInitialized(const FHudEventProgression2023ViewData& eventProgressionData);

	UFUNCTION()
	void OnEventProgressChanged(const int32 value);

	UFUNCTION()
	void OnEventIsChannelingHauntChanged(const bool value);

	UFUNCTION()
	void OnEventInVoidZoneChanged(const bool value);

	UFUNCTION()
	void OnEventHauntTargetChanged(const int32 value);

public:
	UHudEventProgressionPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudEventProgressionPresenter) { return 0; }
