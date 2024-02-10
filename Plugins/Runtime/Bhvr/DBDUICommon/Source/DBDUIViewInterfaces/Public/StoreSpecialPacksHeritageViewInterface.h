#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreHeritagePackViewData.h"
#include "StoreSpecialPacksHeritageViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialPacksHeritageViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreSpecialPacksHeritageViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const TArray<FStoreHeritagePackViewData>& data);

};
