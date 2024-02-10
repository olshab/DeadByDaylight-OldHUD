#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreChapterPacksListViewInterface.generated.h"

class UStoreChapterPackViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreChapterPacksListViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreChapterPacksListViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const TArray<UStoreChapterPackViewData*>& data);

};
