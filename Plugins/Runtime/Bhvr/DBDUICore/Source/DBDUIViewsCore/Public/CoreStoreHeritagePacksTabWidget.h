#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPacksHeritageViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreHeritagePacksTabWidget.generated.h"

class UCoreStoreHeritagePackItemWidget;
class UVerticalBox;
class UCorePreConstructableList;

UCLASS(EditInlineNew)
class UCoreStoreHeritagePacksTabWidget : public UCoreBaseUserWidget, public IStoreSpecialPacksHeritageViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	TSubclassOf<UCoreStoreHeritagePackItemWidget> _itemWidgetClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* Content;

private:
	UPROPERTY(Transient)
	UCorePreConstructableList* _itemList;

private:
	UFUNCTION()
	void OnPackBuyButtonClicked(const FString& packId);

public:
	UCoreStoreHeritagePacksTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreHeritagePacksTabWidget) { return 0; }
