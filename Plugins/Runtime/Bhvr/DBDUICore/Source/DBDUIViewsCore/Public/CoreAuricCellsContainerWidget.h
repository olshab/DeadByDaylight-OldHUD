#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "AuricCellsBuyActionDelegate.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "AuricCellsBundleViewData.h"
#include "CoreAuricCellsContainerWidget.generated.h"

class UCoreAuricCellsBundleWidget;
class UHorizontalBox;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsContainerWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FAuricCellsBuyActionDelegate _buyActionDelegate;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreAuricCellsBundleWidget> _tileWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FMargin _tilePadding;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* Container;

	UPROPERTY(Transient, Export)
	TArray<UCoreAuricCellsBundleWidget*> _tiles;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const TArray<FAuricCellsBundleViewData>& bundlesData);

protected:
	UFUNCTION()
	void OnBuyAction(FName bundleId);

public:
	UCoreAuricCellsContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsContainerWidget) { return 0; }
