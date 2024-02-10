#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "AuricCellsFirstPurchaseViewData.h"
#include "AuricCellsPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UAuricCellsPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> AuricCellsWidgetClass;

private:
	UPROPERTY(Transient)
	FAuricCellsFirstPurchaseViewData _firstPurchaseViewData;

private:
	UFUNCTION()
	void OnPremiumTransactionCompleted(bool success);

	UFUNCTION()
	void OnBuyAction(FName bundleId);

	UFUNCTION()
	void OnBackAction();

public:
	UAuricCellsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UAuricCellsPresenter) { return 0; }
