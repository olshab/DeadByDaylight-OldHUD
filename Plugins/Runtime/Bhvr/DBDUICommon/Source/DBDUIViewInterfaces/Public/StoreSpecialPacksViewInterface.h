#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "StoreSpecialPacksViewInterface.generated.h"

class IStoreSpecialPacksListViewInterface;
class IStoreSpecialPacksHeritageViewInterface;
class IStoreChapterPacksListViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialPacksViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreSpecialPacksViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreSpecialPacksListViewInterface> GetTabSpecialsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreSpecialPacksHeritageViewInterface> GetTabHeritageInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreChapterPacksListViewInterface> GetTabChaptersInterface() const;

};
