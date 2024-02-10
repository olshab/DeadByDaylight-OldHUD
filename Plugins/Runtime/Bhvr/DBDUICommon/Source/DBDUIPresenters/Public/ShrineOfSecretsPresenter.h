#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "ShrineOfSecretsItemViewData.h"
#include "ShrineOfSecretsPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UShrineOfSecretsPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> ShrineOfSecretsWidgetClass;

private:
	UFUNCTION()
	void OnPurchaseButtonClicked(const FShrineOfSecretsItemViewData& shrineOfSecretsItemViewData);

	UFUNCTION()
	void OnItemBuyCompleted(const bool success);

	UFUNCTION()
	void OnBackButtonClicked();

public:
	UShrineOfSecretsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UShrineOfSecretsPresenter) { return 0; }
