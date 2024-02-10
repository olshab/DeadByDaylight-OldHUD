#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCollectionsItemWidget.generated.h"

class UStoreCollectionViewData;
class UCoreStoreCustomizationItemWidget;
class UDBDTextBlock;
class UHorizontalBox;
class UCorePreConstructableList;
class UCoreStoreCollectionsItemWidget;
class UDBDButton;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class UCoreStoreCollectionsItemWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemClicked, const FString&, collectionId, FName, clickedItemCustomizationId);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCollectionUnfocused, UCoreStoreCollectionsItemWidget*, widget, const FString&, collectionId);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCollectionFocused, UCoreStoreCollectionsItemWidget*, widget, const FString&, collectionId);

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TimerText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* CountText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* StoreCustomizationListBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDButton* BannerButton;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _storeCustomizationItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

private:
	UPROPERTY(Transient)
	UCorePreConstructableList* _itemList;

	UPROPERTY(Transient)
	UStoreCollectionViewData* _collectionViewData;

	UPROPERTY(Transient)
	bool _isExpanded;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetupView(UStoreCollectionViewData* collectionViewData);

	UFUNCTION(BlueprintCallable)
	void SetExpanded(bool expanded);

private:
	UFUNCTION()
	void OnItemClickedInternal(UCoreButtonWidget* buttonTarget);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnExpandedChanged();

	UFUNCTION()
	void OnBannerButtonClicked();

public:
	UFUNCTION(BlueprintPure)
	bool IsExpanded() const;

public:
	UCoreStoreCollectionsItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsItemWidget) { return 0; }
