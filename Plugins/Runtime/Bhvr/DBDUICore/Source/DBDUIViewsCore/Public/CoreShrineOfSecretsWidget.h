#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ShrineOfSecretsViewInterface.h"
#include "ShrineOfSecretsItemViewData.h"
#include "Templates/SubclassOf.h"
#include "CoreShrineOfSecretsWidget.generated.h"

class UHorizontalBox;
class UCorePreConstructableList;
class UCoreShrineOfSecretsItemWidget;
class UCoreInputSwitcherWidget;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreShrineOfSecretsWidget : public UCoreBaseUserWidget, public IShrineOfSecretsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	TSubclassOf<UCoreShrineOfSecretsItemWidget> _shrineOfSecretsItemClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SubtitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TimerTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* ItemsHorizontalBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* InfoTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 _preConstructedItemsCount;

private:
	UPROPERTY(Transient)
	UCorePreConstructableList* _shrineOfSecretsItems;

private:
	UFUNCTION()
	void OnPurchaseButtonClicked(const FShrineOfSecretsItemViewData& shrineOfSecretsItemViewData);

	UFUNCTION()
	void OnBackButtonClicked();

public:
	UCoreShrineOfSecretsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreShrineOfSecretsWidget) { return 0; }
