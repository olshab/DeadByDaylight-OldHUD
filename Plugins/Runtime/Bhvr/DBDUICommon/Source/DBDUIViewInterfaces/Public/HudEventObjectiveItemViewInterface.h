#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputCoreTypes.h"
#include "EEventObjectiveItemState.h"
#include "HudEventObjectiveItemViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHudEventObjectiveItemViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHudEventObjectiveItemViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetWidgetState(const EEventObjectiveItemState eventItemState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetWidgetData(const EEventObjectiveItemState eventItemState, const int32 charges, const int32 maxCharges, const float chargePercent);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetInputKey(const FKey inputKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCooldownPercentage(const float cooldownPercent);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChargePercentage(const float chargePercent);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetAvailableCharges(const int32 charges, const int32 maxCharges);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitWidget();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ClearData();

};
