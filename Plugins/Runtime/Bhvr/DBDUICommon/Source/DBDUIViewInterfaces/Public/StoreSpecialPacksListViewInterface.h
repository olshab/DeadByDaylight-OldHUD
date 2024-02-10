#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreSpecialPacksListViewInterface.generated.h"

class UStoreSpecialPackViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialPacksListViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreSpecialPacksListViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const TArray<UStoreSpecialPackViewData*>& data);

};
