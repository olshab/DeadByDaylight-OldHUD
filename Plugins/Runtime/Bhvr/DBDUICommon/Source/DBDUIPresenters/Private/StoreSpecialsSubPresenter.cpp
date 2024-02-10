#include "StoreSpecialsSubPresenter.h"
#include "StoreRedirectionData.h"

void UStoreSpecialsSubPresenter::RequestMoveToCharactersPage(const FStoreRedirectionData& storeRedirectionData)
{

}

void UStoreSpecialsSubPresenter::OnPremiumTransactionCompleted(bool success)
{

}

void UStoreSpecialsSubPresenter::OnAuricCellSpecialOtherOptions()
{

}

void UStoreSpecialsSubPresenter::OnAuricCellSpecialBuyAction(FName bundleId)
{

}

UStoreSpecialsSubPresenter::UStoreSpecialsSubPresenter()
{
	this->_storeSpecialsWidget = NULL;
	this->_cachedSpecialsItems = TArray<UStoreCustomizationItemViewData*>();
}
