#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAimingCrosshairState.h"
#include "HudAimingCrosshairViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHudAimingCrosshairViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHudAimingCrosshairViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetState(const EAimingCrosshairState newState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetProgress(const float progress);

};
