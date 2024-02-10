#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersFilterViewInterface.h"
#include "ESortingOption.h"
#include "OnClearFiltersClickedDelegate.h"
#include "OnStoreFiltersChangedDelegate.h"
#include "CoreStoreCharactersFilterWidget.generated.h"

class UCoreButtonWidget;
class UCoreSortButtonWidget;
class UPanelWidget;
class UCoreFilterButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersFilterWidget : public UCoreBaseUserWidget, public IStoreCharactersFilterViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreButtonWidget* ClearFiltersButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreSortButtonWidget* SortButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* CheckBoxesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _sortingOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESortingOption _defaultSortingOption;

	UPROPERTY(BlueprintReadWrite, Transient, Export)
	TArray<UCoreFilterButtonWidget*> _filtersCheckBoxArray;

private:
	UPROPERTY()
	FOnClearFiltersClickedDelegate _onClearFiltersClicked;

	UPROPERTY()
	FOnStoreFiltersChangedDelegate _onFiltersChanged;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ToggleWidgetVisibility();

	UFUNCTION(BlueprintCallable)
	void OnFilterOptionCheckBoxToggled();

	UFUNCTION(BlueprintCallable)
	void OnClearFiltersClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreStoreCharactersFilterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersFilterWidget) { return 0; }
