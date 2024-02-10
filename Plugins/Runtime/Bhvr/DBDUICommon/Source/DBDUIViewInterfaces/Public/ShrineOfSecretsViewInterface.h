#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShrineOfSecretsViewData.h"
#include "ShrineOfSecretsItemViewData.h"
#include "ShrineOfSecretsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UShrineOfSecretsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IShrineOfSecretsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateItemsFromPurchase(const FShrineOfSecretsViewData& shrineOfSecretsViewData, const FShrineOfSecretsItemViewData& purchasedItem);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FShrineOfSecretsViewData& shrineOfSecretsViewData);

};
