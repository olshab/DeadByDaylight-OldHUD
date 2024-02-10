#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GenericRefreshingPopupViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UGenericRefreshingPopupViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IGenericRefreshingPopupViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void Refresh(float remainingTime);

};
