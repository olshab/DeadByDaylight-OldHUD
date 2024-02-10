#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "StoreSubPresenter.h"
#include "Templates/SubclassOf.h"
#include "StoreHeritagePackViewData.h"
#include "StoreSpecialPacksSubPresenter.generated.h"

class UUserWidget;
class UStoreSpecialPackViewData;
class UStoreChapterPackViewData;

UCLASS(BlueprintType)
class DBDUIPRESENTERS_API UStoreSpecialPacksSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> StoreBundlesWidgetClass;

private:
	UPROPERTY(Transient)
	TArray<UStoreSpecialPackViewData*> _specialPacks;

	UPROPERTY(Transient)
	TArray<UStoreChapterPackViewData*> _chapterPacks;

	UPROPERTY(Transient)
	TArray<FStoreHeritagePackViewData> _heritagePacks;

private:
	UFUNCTION()
	void RequestMoveToCharactersPage(const FStoreRedirectionData& redirectionData);

	UFUNCTION()
	void OnSpecialPackBuyClicked(const FString& packId);

	UFUNCTION()
	void OnHeritagePackBuyClicked(const FString& packId);

	UFUNCTION()
	void OnChapterPackRedirectClicked(const FString& chapterId, const FString& heritageId);

	UFUNCTION()
	void OnChapterPackBuyClicked(const FString& packId);

	UFUNCTION()
	void OnArchivePassItemClicked(const FName& archiveId, const FString& packId);

public:
	UStoreSpecialPacksSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialPacksSubPresenter) { return 0; }
