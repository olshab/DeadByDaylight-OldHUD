#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HudEventProgression2023ViewData.h"
#include "HudEventProgression2023ViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHudEventProgression2023ViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHudEventProgression2023ViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateVoidZoneState(const FHudEventProgression2023ViewData& hudEventProgressionViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateHauntTarget(const FHudEventProgression2023ViewData& hudEventProgressionViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateEnergyProgress(const FHudEventProgression2023ViewData& hudEventProgressionViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitEventProgression(const FHudEventProgression2023ViewData& hudEventProgressionViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EnableEventProgression(const bool isEnabled);

};
