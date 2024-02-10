#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "StoreCharactersSelectionViewData.h"
#include "StoreCharactersSelectionViewInterface.generated.h"

class UStoreCharacterItemViewData;
class IStoreCharactersFilterViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersSelectionViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersSelectionViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateSelectedCharacter(const int32 selectedCharacterIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateCharacters(const TArray<UStoreCharacterItemViewData*>& characters);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreCharactersSelectionViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersFilterViewInterface> GetStoreCharactersFilterInterface() const;

};
