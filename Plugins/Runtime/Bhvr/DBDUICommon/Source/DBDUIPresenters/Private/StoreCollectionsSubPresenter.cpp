#include "StoreCollectionsSubPresenter.h"

void UStoreCollectionsSubPresenter::OnCollectionUnfocused()
{

}

void UStoreCollectionsSubPresenter::OnCollectionItemSelected(const FString& collectionId, FName selectedCustomizationItemId)
{

}

void UStoreCollectionsSubPresenter::OnCollectionFocused(const FString& collectionId)
{

}

UStoreCollectionsSubPresenter::UStoreCollectionsSubPresenter()
{
	this->_specialCollectionsViewData = TArray<UStoreCollectionViewData*>();
	this->_featuredCollectionsViewData = TArray<UStoreCollectionViewData*>();
	this->_allCollectionsViewData = TArray<UStoreCollectionViewData*>();
	this->_focusedCollection = NULL;
}
