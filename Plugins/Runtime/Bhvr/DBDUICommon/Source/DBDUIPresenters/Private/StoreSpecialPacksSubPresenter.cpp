#include "StoreSpecialPacksSubPresenter.h"
#include "StoreRedirectionData.h"

void UStoreSpecialPacksSubPresenter::RequestMoveToCharactersPage(const FStoreRedirectionData& redirectionData)
{

}

void UStoreSpecialPacksSubPresenter::OnSpecialPackBuyClicked(const FString& packId)
{

}

void UStoreSpecialPacksSubPresenter::OnHeritagePackBuyClicked(const FString& packId)
{

}

void UStoreSpecialPacksSubPresenter::OnChapterPackRedirectClicked(const FString& chapterId, const FString& heritageId)
{

}

void UStoreSpecialPacksSubPresenter::OnChapterPackBuyClicked(const FString& packId)
{

}

void UStoreSpecialPacksSubPresenter::OnArchivePassItemClicked(const FName& archiveId, const FString& packId)
{

}

UStoreSpecialPacksSubPresenter::UStoreSpecialPacksSubPresenter()
{
	this->StoreBundlesWidgetClass = NULL;
	this->_specialPacks = TArray<UStoreSpecialPackViewData*>();
	this->_chapterPacks = TArray<UStoreChapterPackViewData*>();
	this->_heritagePacks = TArray<FStoreHeritagePackViewData>();
}
