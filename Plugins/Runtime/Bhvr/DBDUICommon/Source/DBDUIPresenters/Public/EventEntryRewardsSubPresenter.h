#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "EventEntryRewardsSubPresenter.generated.h"

class UEventEntryPresenter;
class IEventCollectionViewInterface;
class UStoreCustomizationItemViewData;

UCLASS()
class UEventEntryRewardsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	TScriptInterface<IEventCollectionViewInterface> _tabWidget;

	UPROPERTY(Transient)
	TArray<UStoreCustomizationItemViewData*> _rewardsGridData;

	UPROPERTY(Transient)
	TArray<UStoreCustomizationItemViewData*> _previewAreaRewardsData;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UEventEntryPresenter* _parentPresenter;

protected:
	UFUNCTION()
	void OnRewardGridItemClicked(const int32 selectedIndex);

	UFUNCTION()
	void OnPreviewAreaItemClicked(const int32 selectedIndex);

	UFUNCTION()
	void OnInstructionButtonClicked();

public:
	UEventEntryRewardsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryRewardsSubPresenter) { return 0; }
