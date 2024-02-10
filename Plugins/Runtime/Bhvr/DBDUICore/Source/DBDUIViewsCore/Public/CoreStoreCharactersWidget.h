#pragma once

#include "CoreMinimal.h"
#include "StoreItemEquipClickedDelegate.h"
#include "Layout/Margin.h"
#include "StoreCharactersViewInterface.h"
#include "CoreStoreBaseSubTabsWidget.h"
#include "StoreItemEquipAllClickedDelegate.h"
#include "StoreItemUnlockClickedDelegate.h"
#include "StoreItemSelectAllClickedDelegate.h"
#include "StoreItemPlayMoriClickedDelegate.h"
#include "StoreItemSeePackClickedDelegate.h"
#include "Templates/SubclassOf.h"
#include "Framework/Text/TextLayout.h"
#include "CoreStoreCharactersWidget.generated.h"

class UCoreCurrencyButtonWidget;
class UDBDTextBlock;
class UCoreStoreCharacterPerksToastWidget;
class UCoreButtonWidget;
class UVerticalBox;
class UCorePreConstructableList;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersWidget : public UCoreStoreBaseSubTabsWidget, public IStoreCharactersViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FStoreItemUnlockClickedDelegate _characterUnlockClickedDelegate;

	UPROPERTY()
	FStoreItemUnlockClickedDelegate _customizationUnlockClickedDelegate;

	UPROPERTY()
	FStoreItemEquipClickedDelegate _characterEquipClickedDelegate;

	UPROPERTY()
	FStoreItemEquipClickedDelegate _customizationEquipClickedDelegate;

	UPROPERTY()
	FStoreItemEquipAllClickedDelegate _customizationEquipAllClickedDelegate;

	UPROPERTY()
	FStoreItemSelectAllClickedDelegate _customizationSelectAllClickedDelegate;

	UPROPERTY()
	FStoreItemSeePackClickedDelegate _characterSeePackClickedDelegate;

	UPROPERTY()
	FStoreItemSeePackClickedDelegate _customizationSeePackClickedDelegate;

	UPROPERTY()
	FStoreItemPlayMoriClickedDelegate _playMoriClickedDelegate;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreCurrencyButtonWidget> _currencyButtonWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 _preConstructedCurrencyButtonCount;

	UPROPERTY(EditAnywhere, NoClear)
	FMargin _currencyButtonPadding;

	UPROPERTY(EditAnywhere, NoClear)
	TEnumAsByte<ETextJustify::Type> _currencyButtonAlignment;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SelectedCharacterName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreStoreCharacterPerksToastWidget* PerksToast;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* CurrencyButtonsTitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* CurrencyButtonsVerticalBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreButtonWidget* EquipButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreButtonWidget* EquipAllButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreButtonWidget* SelectAllButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreButtonWidget* SeePackButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SeePackMessageText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreButtonWidget* PlayMoriButton;

	UPROPERTY(Transient)
	UCorePreConstructableList* _currencyButtonList;

protected:
	UFUNCTION()
	void OnPlayMoriClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void OnItemUnlockClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void OnItemSelectAllClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void OnItemSeePackClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void OnItemEquipClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void OnItemEquipAllClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreStoreCharactersWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersWidget) { return 0; }
