#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreRedirectionData.h"
#include "StoreSpecialPacksListViewInterface.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreSpecialPacksListWidget.generated.h"

class UVerticalBox;
class UCorePreConstructableList;
class UCoreStoreSpecialPacksPackItemWidget;

UCLASS(EditInlineNew)
class UCoreStoreSpecialPacksListWidget : public UCoreBaseUserWidget, public IStoreSpecialPacksListViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	TSubclassOf<UCoreStoreSpecialPacksPackItemWidget> _itemWidgetClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* Content;

private:
	UPROPERTY(Transient)
	UCorePreConstructableList* _itemList;

private:
	UFUNCTION()
	void OnItemCustomizationClicked(const FStoreRedirectionData& redirectionData);

	UFUNCTION()
	void OnItemCharacterClicked(const FStoreRedirectionData& redirectionData);

	UFUNCTION()
	void OnItemBuyActionClicked(const FString& packId);

	UFUNCTION()
	void OnItemArchivePassClicked(const FName& archiveId, const FString& packId);

public:
	UCoreStoreSpecialPacksListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPacksListWidget) { return 0; }
