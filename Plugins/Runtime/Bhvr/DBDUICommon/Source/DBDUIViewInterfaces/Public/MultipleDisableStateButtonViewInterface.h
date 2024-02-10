#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EButtonDisableState.h"
#include "MultipleDisableStateButtonViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UMultipleDisableStateButtonViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IMultipleDisableStateButtonViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void SetButtonDisableState(EButtonDisableState buttonDisableState);

};
