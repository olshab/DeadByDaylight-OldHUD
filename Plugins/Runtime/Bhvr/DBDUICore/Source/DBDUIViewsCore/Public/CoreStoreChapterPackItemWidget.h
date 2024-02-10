#pragma once

#include "CoreMinimal.h"
#include "ChapterPackCustomizationClickedDelegate.h"
#include "ChapterPackRedirectButtonActionDelegate.h"
#include "CoreSelectableButtonWidget.h"
#include "ChapterPackBuyButtonActionDelegate.h"
#include "ChapterPackCharacterClickedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreChapterPackItemWidget.generated.h"

class UStoreChapterPackViewData;
class UCoreKeyListenerButtonWidget;
class UCoreStoreCustomizationItemWidget;
class UDBDTextBlock;
class UCorePreConstructableList;
class UHorizontalBox;
class UCorePremiumCurrencyButtonWidget;
class UCoreStoreCharacterItemWidget;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreChapterPackItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FChapterPackBuyButtonActionDelegate BuyPremiumActionDelegate;

	UPROPERTY()
	FChapterPackRedirectButtonActionDelegate RedirectActionDelegate;

	UPROPERTY()
	FChapterPackCharacterClickedDelegate CharacterClickedDelegate;

	UPROPERTY()
	FChapterPackCustomizationClickedDelegate CustomizationClickedDelegate;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* CharactersBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* CustomizationsBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePremiumCurrencyButtonWidget* PremiumBuyButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreKeyListenerButtonWidget* RedirectButton;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _isExpanded;

	UPROPERTY(EditAnywhere)
	int32 _initialItemPoolSize;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreStoreCharacterItemWidget> _characterItemWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _customizationItemWidgetClass;

private:
	UPROPERTY(Transient)
	UStoreChapterPackViewData* _data;

	UPROPERTY(Transient)
	UCorePreConstructableList* _characterList;

	UPROPERTY(Transient)
	UCorePreConstructableList* _customizationList;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ToggleExpanded();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetExpanded(bool expanded);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(UStoreChapterPackViewData* data);

protected:
	UFUNCTION()
	void OnRedirectButtonClicked(UCoreButtonWidget* button);

	UFUNCTION()
	void OnPremiumBuyButtonClicked(UCoreButtonWidget* button);

	UFUNCTION()
	void OnCustomizationClicked(UCoreButtonWidget* button);

	UFUNCTION()
	void OnCharacterClicked(UCoreButtonWidget* button);

public:
	UCoreStoreChapterPackItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreChapterPackItemWidget) { return 0; }
