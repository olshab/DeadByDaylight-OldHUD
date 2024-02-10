#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "ProfileMenuCustomizationViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ECustomizationCategory.h"
#include "ProfileMenuCustomizationWidget.generated.h"

class UCustomizationItemGridContainer;
class UCoreImagePreviewAreaWidget;
class ISearchBarViewInterface;
class UCoreSortButtonWidget;
class UCoreInputSwitcherWidget;
class UCoreSearchBarWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UProfileMenuCustomizationWidget : public UCoreTabContentWidget, public IProfileMenuCustomizationViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreSortButtonWidget* SortButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _sortingOptions;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizationItemGridContainer* CustomizationGrid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreImagePreviewAreaWidget* PreviewArea;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* EquipInputSwitcher;

	UPROPERTY(BlueprintReadOnly)
	FText _noBannerSelectedText;

	UPROPERTY(BlueprintReadOnly)
	FText _noBadgeSelectedText;

	UPROPERTY(BlueprintReadOnly)
	ECustomizationCategory _customizationCategory;

private:
	UPROPERTY()
	TScriptInterface<ISearchBarViewInterface> _searchBar;

	UPROPERTY(Export)
	UCoreSearchBarWidget* SearchBar;

protected:
	UFUNCTION()
	void OnEquipButtonClicked();

	UFUNCTION()
	void OnCustomizationGridItemClicked(const int32 selectedIndex);

public:
	UProfileMenuCustomizationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuCustomizationWidget) { return 0; }
