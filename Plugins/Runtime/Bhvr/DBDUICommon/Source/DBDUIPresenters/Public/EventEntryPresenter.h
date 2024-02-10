#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "EventEntryPresenter.generated.h"

class UUserWidget;
class UEventEntryStoreSubPresenter;
class UEventEntryEventSubPresenter;
class USubPresenter;
class UEventEntryCollectionSubPresenter;
class UEventEntryDetailsSubPresenter;
class UEventEntryViewData;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UEventEntryPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> EventEntryWidgetClass;

private:
	UPROPERTY(Transient)
	UEventEntryEventSubPresenter* _eventSubPresenter;

	UPROPERTY(Transient)
	UEventEntryDetailsSubPresenter* _detailsSubPresenter;

	UPROPERTY(Transient)
	UEventEntryCollectionSubPresenter* _collectionSubPresenter;

	UPROPERTY(Transient)
	UEventEntryStoreSubPresenter* _storeSubPresenter;

	UPROPERTY(Transient)
	USubPresenter* _activeSubPresenter;

	UPROPERTY(Transient)
	UEventEntryViewData* _viewData;

private:
	UFUNCTION()
	void OnSelectedTabChanged(const int32 key);

	UFUNCTION()
	void OnMilestoneTrackerItemClicked(const int32 selectedIndex);

	UFUNCTION()
	void OnBackAction();

	UFUNCTION()
	void GoToStoreButtonClicked(const FName selectedStoreTabItemId);

public:
	UEventEntryPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryPresenter) { return 0; }
