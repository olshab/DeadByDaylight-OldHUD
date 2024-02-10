#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionsListViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCollectionsListWidget.generated.h"

class UVerticalBox;
class UCoreStoreCollectionsItemWidget;
class UCorePreConstructableList;

UCLASS(EditInlineNew)
class UCoreStoreCollectionsListWidget : public UCoreBaseUserWidget, public IStoreCollectionsListViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* CollectionItemListBox;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	TSubclassOf<UCoreStoreCollectionsItemWidget> _collectionItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	int32 _preConstructedItemsCount;

private:
	UPROPERTY(Transient)
	UCorePreConstructableList* _itemList;

protected:
	UFUNCTION(BlueprintCallable)
	void OnUnfocusCollection(UCoreStoreCollectionsItemWidget* unfocusedWidget, const FString& collectionId);

	UFUNCTION(BlueprintCallable)
	void OnFocusCollection(UCoreStoreCollectionsItemWidget* focusedWidget, const FString& collectionId);

	UFUNCTION()
	void OnCollectionItemClicked(const FString& collectionId, FName selectedItemId);

public:
	UCoreStoreCollectionsListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsListWidget) { return 0; }
