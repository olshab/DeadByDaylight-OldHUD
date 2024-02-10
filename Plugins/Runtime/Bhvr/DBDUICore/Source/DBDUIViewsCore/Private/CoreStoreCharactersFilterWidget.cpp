#include "CoreStoreCharactersFilterWidget.h"

class UCoreButtonWidget;

void UCoreStoreCharactersFilterWidget::OnFilterOptionCheckBoxToggled()
{

}

void UCoreStoreCharactersFilterWidget::OnClearFiltersClicked(UCoreButtonWidget* buttonTarget)
{

}

UCoreStoreCharactersFilterWidget::UCoreStoreCharactersFilterWidget()
{
	this->ClearFiltersButton = NULL;
	this->SortButton = NULL;
	this->CheckBoxesContainer = NULL;
	this->_sortingOptions = 0;
	this->_defaultSortingOption = ESortingOption::None;
	this->_filtersCheckBoxArray = TArray<UCoreFilterButtonWidget*>();
}
