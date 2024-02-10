#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StoreSpecialsViewInterface.h"
#include "SpecialItemClickedDelegate.h"
#include "CoreBaseUserWidget.h"
#include "CoreStoreSpecialsWidget.generated.h"

class UDBDWrapBox;
class UCorePreConstructableList;
class UCoreAuricCellsSpecialOfferWidget;
class UCoreButtonWidget;
class UCoreStoreSpecialsItemWidget;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class UCoreStoreSpecialsWidget : public UCoreBaseUserWidget, public IStoreSpecialsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreStoreSpecialsItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(EditAnywhere)
	float _itemScale;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreAuricCellsSpecialOfferWidget* AuricCellSpecialOffer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* NoAuricCellsTitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* NoAuricCellsTextTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDWrapBox* Container;

	UPROPERTY()
	FSpecialItemClickedDelegate SpecialItemClickedDelegate;

private:
	UPROPERTY(Transient)
	UCorePreConstructableList* _itemList;

private:
	UFUNCTION()
	void OnSpecialItemClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreStoreSpecialsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialsWidget) { return 0; }
