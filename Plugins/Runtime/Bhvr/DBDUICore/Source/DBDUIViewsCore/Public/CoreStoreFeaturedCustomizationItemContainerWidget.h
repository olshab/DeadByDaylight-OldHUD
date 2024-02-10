#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "CoreButtonSelector.h"
#include "Templates/SubclassOf.h"
#include "EEasingType.h"
#include "CoreStoreFeaturedCustomizationItemContainerWidget.generated.h"

class UStoreCustomizationItemViewData;
class UCoreStoreFeaturedCustomizationItemWidget;
class UCanvasPanel;
class UCoreInputSwitcherWidget;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class UCoreStoreFeaturedCustomizationItemContainerWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreStoreFeaturedCustomizationItemWidget> ItemTileClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* Root;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* LeftArrow;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RightArrow;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 MaxVisibleTiles;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 TileHeight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 SmallTileWidth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 BigTileWidth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 TileSpacing;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float TranslationDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EEasingType TranslationEasingType;

private:
	UPROPERTY()
	TArray<UStoreCustomizationItemViewData*> _cachedData;

	UPROPERTY(Export)
	TArray<UCoreStoreFeaturedCustomizationItemWidget*> _usedTilePool;

	UPROPERTY(Export)
	TArray<UCoreStoreFeaturedCustomizationItemWidget*> _availableTilePool;

	UPROPERTY(Export)
	TMap<int32, UCoreStoreFeaturedCustomizationItemWidget*> _positionToWidgetMap;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetItems(const TArray<UStoreCustomizationItemViewData*>& viewDataArray);

private:
	UFUNCTION()
	void OnSelectedItemChanged(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnMoveToCharactersCustomizationPageRequested(const FStoreRedirectionData& redirectionData);

	UFUNCTION()
	void OnMoveCompleted();

	UFUNCTION()
	void MovePrevious();

	UFUNCTION()
	void MoveNext();

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitItemContainer();

public:
	UCoreStoreFeaturedCustomizationItemContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedCustomizationItemContainerWidget) { return 0; }
