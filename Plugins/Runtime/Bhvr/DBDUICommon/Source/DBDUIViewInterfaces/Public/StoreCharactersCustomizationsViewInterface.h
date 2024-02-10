#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "StoreCharactersCustomizationsViewData.h"
#include "StoreCharactersCustomizationsViewInterface.generated.h"

class UStoreCustomizationItemViewData;
class IStoreCharactersFilterViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersCustomizationsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersCustomizationsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateSelectedCustomizations(const TArray<FName>& selectedCustomizationIds);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateCustomizations(const TArray<UStoreCustomizationItemViewData*>& customizations);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreCharactersCustomizationsViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersFilterViewInterface> GetStoreCharactersFilterInterface() const;

};
