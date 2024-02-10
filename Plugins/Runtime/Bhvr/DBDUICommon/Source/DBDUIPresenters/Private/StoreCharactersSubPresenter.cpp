#include "StoreCharactersSubPresenter.h"
#include "ECurrencyType.h"
#include "ESortingOption.h"
#include "ECustomizationCategory.h"
#include "ESortingOrder.h"
#include "StoreCharactersFiltersData.h"

class UAnimationPreviewSubsystem;

void UStoreCharactersSubPresenter::PlayMoriAnimation()
{

}

void UStoreCharactersSubPresenter::OnMoriComplete(UAnimationPreviewSubsystem* animationPreviewSubsystem)
{

}

void UStoreCharactersSubPresenter::OnCustomizationUnlockCompleted(bool success)
{

}

void UStoreCharactersSubPresenter::OnCustomizationUnlockClicked(ECurrencyType currencyType)
{

}

void UStoreCharactersSubPresenter::OnCustomizationsSortingChanged(const ESortingOption sortingOption, const ESortingOrder sortingOrder)
{

}

void UStoreCharactersSubPresenter::OnCustomizationsFiltersChanged(const FStoreCharactersFiltersData& customizationsFilterData)
{

}

void UStoreCharactersSubPresenter::OnCustomizationSelected(const FName customizationId, const bool isSelected)
{

}

void UStoreCharactersSubPresenter::OnCustomizationSelectAllClicked()
{

}

void UStoreCharactersSubPresenter::OnCustomizationSeePackClicked()
{

}

void UStoreCharactersSubPresenter::OnCustomizationsClearFiltersClicked()
{

}

void UStoreCharactersSubPresenter::OnCustomizationEquipClicked()
{

}

void UStoreCharactersSubPresenter::OnCustomizationEquipAllClicked()
{

}

void UStoreCharactersSubPresenter::OnCharmSlotSelected(const int32 slotIndex)
{

}

void UStoreCharactersSubPresenter::OnCharacterUnlockCompleted(bool success)
{

}

void UStoreCharactersSubPresenter::OnCharacterUnlockClicked(ECurrencyType currencyType)
{

}

void UStoreCharactersSubPresenter::OnCharactersSortingChanged(const ESortingOption sortingOption, const ESortingOrder sortingOrder)
{

}

void UStoreCharactersSubPresenter::OnCharactersFiltersChanged(const FStoreCharactersFiltersData& charactersFilterData)
{

}

void UStoreCharactersSubPresenter::OnCharacterSelected(const int32 characterIndex)
{

}

void UStoreCharactersSubPresenter::OnCharacterSeePackClicked()
{

}

void UStoreCharactersSubPresenter::OnCharactersClearFiltersClicked()
{

}

void UStoreCharactersSubPresenter::OnCharacterEquipClicked()
{

}

void UStoreCharactersSubPresenter::OnCategorySelected(const ECustomizationCategory category)
{

}

UStoreCharactersSubPresenter::UStoreCharactersSubPresenter()
{
	this->StoreCharactersWidgetClass = NULL;
	this->DisplayStandName = NAME_None;
	this->_availableCharacters = TArray<UStoreCharacterItemViewData*>();
	this->_displayingCharacters = TArray<UStoreCharacterItemViewData*>();
	this->_charactersMap = TMap<int32, UStoreCharacterItemViewData*>();
	this->_availableCustomizations = TArray<UStoreCustomizationItemViewData*>();
	this->_displayingCustomizations = TArray<UStoreCustomizationItemViewData*>();
	this->_customizationsMap = TMap<FName, UStoreCustomizationItemViewData*>();
	this->_availableCategories = TArray<FStoreCategoryViewData>();
	this->_charactersSortingOption = ESortingOption::None;
	this->_charactersSortingOrder = ESortingOrder::Descending;
	this->_customizationsSortingOption = ESortingOption::None;
	this->_customizationsSortingOrder = ESortingOrder::Descending;
}
