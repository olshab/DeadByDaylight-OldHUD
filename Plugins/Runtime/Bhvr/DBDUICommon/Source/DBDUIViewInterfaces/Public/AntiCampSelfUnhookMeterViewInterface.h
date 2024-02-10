#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAntiCampSelfUnhookMeterState.h"
#include "AntiCampSelfUnhookMeterViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UAntiCampSelfUnhookMeterViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IAntiCampSelfUnhookMeterViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetState(const EAntiCampSelfUnhookMeterState newState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetProgress(const float progress);

};
