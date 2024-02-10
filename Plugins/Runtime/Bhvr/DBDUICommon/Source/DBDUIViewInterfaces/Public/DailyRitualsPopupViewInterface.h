#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DailyRitualViewData.h"
#include "DailyRitualsPopupViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UDailyRitualsPopupViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IDailyRitualsPopupViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void StartAnim();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetIsOnboardingRitualsExperimentActive(bool isOnboardingRitualsExperimentActive);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetDailyRitualsData(const TArray<FDailyRitualViewData>& dailyRitualsData, bool isAfterTrial);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCanRemoveDailyRitual(const bool canRemoveDailyRitual);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetAllDailyRitualTilesVisible();

};
