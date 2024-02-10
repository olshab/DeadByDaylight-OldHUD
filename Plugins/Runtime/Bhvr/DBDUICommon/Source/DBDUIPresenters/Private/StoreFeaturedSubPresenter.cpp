#include "StoreFeaturedSubPresenter.h"
#include "StoreRedirectionData.h"

void UStoreFeaturedSubPresenter::RequestMoveToCharactersPage(const FStoreRedirectionData& storeRedirectionData)
{

}

void UStoreFeaturedSubPresenter::OnBackendStoreDataReceived(bool success)
{

}

UStoreFeaturedSubPresenter::UStoreFeaturedSubPresenter()
{
	this->_itemsViewData = TArray<UStoreCustomizationItemViewData*>();
	this->_charactersViewData = TArray<FStoreFeaturedCharacterViewData>();
	this->_chapterPacksViewData = TArray<UStoreFeaturedChapterPackViewData*>();
}
