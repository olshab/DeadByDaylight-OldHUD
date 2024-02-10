#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LockedFeatureElementViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API ULockedFeatureElementViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ILockedFeatureElementViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsLockedFeature();

};
