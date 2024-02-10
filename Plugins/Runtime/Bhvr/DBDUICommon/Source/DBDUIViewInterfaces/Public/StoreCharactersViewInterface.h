#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreCharactersActionButtonsViewData.h"
#include "EPlayerRole.h"
#include "UObject/ScriptInterface.h"
#include "StoreCharactersViewInterface.generated.h"

class UMenuPowerViewData;
class UCharacterPerkViewData;
class IStoreCharactersBioViewInterface;
class IStoreCharactersCustomizationsViewInterface;
class IStoreCharactersSelectionViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetKillerPower(UMenuPowerViewData* killerPowerViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCustomizationButtons(const FStoreCharactersActionButtonsViewData& buttonsViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCharacterData(const FText& characterName, EPlayerRole role, const TArray<UCharacterPerkViewData*>& characterPerks);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCharacterButtons(const FStoreCharactersActionButtonsViewData& buttonsViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersSelectionViewInterface> GetStoreCharactersSelectionInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersCustomizationsViewInterface> GetStoreCharactersCustomizationsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersBioViewInterface> GetStoreCharactersBioInterface() const;

};
