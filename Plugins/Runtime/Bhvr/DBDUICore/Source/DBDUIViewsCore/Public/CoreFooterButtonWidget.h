#pragma once

#include "CoreMinimal.h"
#include "LockedFeatureElementViewInterface.h"
#include "MultipleDisableStateButtonViewInterface.h"
#include "MainMenuButtonViewInterface.h"
#include "DBDFeatureLockProgress.h"
#include "EButtonDisableState.h"
#include "CoreKeyListenerButtonWidget.h"
#include "EDBDFeatureType.h"
#include "CoreFooterButtonWidget.generated.h"

class UDBDImage;

UCLASS(EditInlineNew)
class UCoreFooterButtonWidget : public UCoreKeyListenerButtonWidget, public ILockedFeatureElementViewInterface, public IMultipleDisableStateButtonViewInterface, public IMainMenuButtonViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isFeatureGatingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isUsingSubPanel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EDBDFeatureType _lockedFeatureType;

	UPROPERTY(BlueprintReadOnly)
	FDBDFeatureLockProgress _lockedFeatureData;

	UPROPERTY(BlueprintReadWrite)
	EButtonDisableState _buttonDisableState;

	UPROPERTY(BlueprintReadOnly)
	FText _tooltipLabelText;

	UPROPERTY(BlueprintReadOnly)
	FText _betaFeatureText;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* IconIMG;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateLockedFeatureVisuals(bool isLockedFeature);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetUnhoveredColor();

	UFUNCTION(BlueprintImplementableEvent)
	void SetSubPanelText(const FText& title, const FText& description);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetHoveredColor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBetaFeatureOverlayVisible(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool IsLocked();

protected:
	UFUNCTION(BlueprintPure)
	bool HasValidLockedFeatureData() const;

public:
	UCoreFooterButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFooterButtonWidget) { return 0; }
