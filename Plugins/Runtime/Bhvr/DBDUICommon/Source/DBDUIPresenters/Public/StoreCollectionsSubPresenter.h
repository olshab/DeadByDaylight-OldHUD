#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "StoreCollectionsSubPresenter.generated.h"

class UStoreCollectionViewData;

UCLASS()
class DBDUIPRESENTERS_API UStoreCollectionsSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<UStoreCollectionViewData*> _specialCollectionsViewData;

	UPROPERTY(Transient)
	TArray<UStoreCollectionViewData*> _featuredCollectionsViewData;

	UPROPERTY(Transient)
	TArray<UStoreCollectionViewData*> _allCollectionsViewData;

	UPROPERTY(Transient)
	UStoreCollectionViewData* _focusedCollection;

private:
	UFUNCTION()
	void OnCollectionUnfocused();

	UFUNCTION()
	void OnCollectionItemSelected(const FString& collectionId, FName selectedCustomizationItemId);

	UFUNCTION()
	void OnCollectionFocused(const FString& collectionId);

public:
	UStoreCollectionsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionsSubPresenter) { return 0; }
