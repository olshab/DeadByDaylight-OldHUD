#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreCharactersFiltersData.h"
#include "StoreCharactersFilterViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersFilterViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersFilterViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRarityFiltersVisibility(bool showRarityFilters);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetFiltersState(FStoreCharactersFiltersData newFiltersData);

};
