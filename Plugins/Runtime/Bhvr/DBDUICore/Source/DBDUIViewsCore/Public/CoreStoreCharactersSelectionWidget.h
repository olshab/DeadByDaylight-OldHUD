#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersSelectionViewInterface.h"
#include "StoreCharacterSelectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCharactersSelectionWidget.generated.h"

class UCoreStoreCharacterItemWidget;
class UUniformGridPanel;
class UScrollBox;
class UCoreStoreCharactersFilterWidget;
class UCorePreConstructableList;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersSelectionWidget : public UCoreBaseUserWidget, public IStoreCharactersSelectionViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FStoreCharacterSelectedDelegate _characterSelectedDelegate;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreStoreCharacterItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere)
	int32 _numberOfColumns;

	UPROPERTY(EditAnywhere)
	float _itemScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScrollBox* Scroll;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUniformGridPanel* Container;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreStoreCharactersFilterWidget* FiltersWidget;

	UPROPERTY(Transient, Export)
	TArray<UCoreStoreCharacterItemWidget*> _allCharacterItems;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	int32 _preConstructedItemsCount;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UCoreStoreCharacterItemWidget* _selectedItem;

private:
	UPROPERTY(Transient)
	UCorePreConstructableList* _characterList;

protected:
	UFUNCTION()
	void OnCharacterSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

public:
	UCoreStoreCharactersSelectionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersSelectionWidget) { return 0; }
