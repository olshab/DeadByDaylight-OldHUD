#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HudEventProgressionViewData.h"
#include "HudEventProgressionViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHudEventProgressionViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHudEventProgressionViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateEventPendingProgress(const FHudEventProgressionViewData& hudEventProgressionViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateEventBankedProgress(const FHudEventProgressionViewData& hudEventProgressionViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitEventProgression(const FHudEventProgressionViewData& hudEventProgressionViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EnableEventProgression(const bool isEnabled);

};
