#pragma once

#include "CoreMinimal.h"
#include "ClaimedAllRitualsDelegate.h"
#include "DailyRitualsPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "ClaimedRitualDelegate.h"
#include "RemovedDailyRitualDelegate.h"
#include "DailyRitualsPopupWidget.generated.h"

class UDBDImage;
class UMaterialInstance;
class UDailyRitualsContainerWidget;
class UDBDRichTextBlock;
class UOverlay;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UDailyRitualsPopupWidget : public UCoreGenericPopupWidget, public IDailyRitualsPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FRemovedDailyRitualDelegate _onRemovedDailyRitualDelegate;

	UPROPERTY()
	FClaimedRitualDelegate _onClaimedRitualDelegate;

	UPROPERTY()
	FClaimedAllRitualsDelegate _onClaimedAllRitualsDelegate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* BaseBG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UOverlay* DailyRitualsDetails;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDailyRitualsContainerWidget* DailyRitualsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* FooterText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* DefaultBackgroundMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* AfterTrialBackgroundMaterialInstance;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetVisuals(bool isAfterTrial);

	UFUNCTION()
	void OnDailyRitualRemoveButtonClicked(const FString& dailyRitualKey);

	UFUNCTION()
	void OnDailyRitualClaimButtonClicked(const FString& dailyRitualKey);

	UFUNCTION()
	void OnDailyRitualClaimAllButtonClicked();

public:
	UDailyRitualsPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualsPopupWidget) { return 0; }
