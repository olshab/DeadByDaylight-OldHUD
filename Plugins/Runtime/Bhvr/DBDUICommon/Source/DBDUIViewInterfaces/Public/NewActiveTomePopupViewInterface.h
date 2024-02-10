#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NewActiveTomePopupViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UNewActiveTomePopupViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API INewActiveTomePopupViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRiftEnabled(const bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRemainingTime(const FString& remainingTime);

};
