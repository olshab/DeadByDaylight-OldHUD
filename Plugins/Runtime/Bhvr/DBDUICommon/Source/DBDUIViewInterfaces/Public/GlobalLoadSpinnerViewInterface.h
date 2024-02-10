#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GlobalLoadSpinnerViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UGlobalLoadSpinnerViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IGlobalLoadSpinnerViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetGlobalSpinnerVisibility(bool isVisible);

};
