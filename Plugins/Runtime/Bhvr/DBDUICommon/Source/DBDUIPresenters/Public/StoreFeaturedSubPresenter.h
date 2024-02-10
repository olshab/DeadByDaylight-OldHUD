#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "StoreSubPresenter.h"
#include "StoreFeaturedCharacterViewData.h"
#include "StoreFeaturedSubPresenter.generated.h"

class UStoreCustomizationItemViewData;
class UStoreFeaturedChapterPackViewData;

UCLASS()
class DBDUIPRESENTERS_API UStoreFeaturedSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<UStoreCustomizationItemViewData*> _itemsViewData;

	UPROPERTY(Transient)
	TArray<FStoreFeaturedCharacterViewData> _charactersViewData;

	UPROPERTY(Transient)
	TArray<UStoreFeaturedChapterPackViewData*> _chapterPacksViewData;

private:
	UFUNCTION()
	void RequestMoveToCharactersPage(const FStoreRedirectionData& storeRedirectionData);

public:
	UFUNCTION()
	void OnBackendStoreDataReceived(bool success);

public:
	UStoreFeaturedSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreFeaturedSubPresenter) { return 0; }
