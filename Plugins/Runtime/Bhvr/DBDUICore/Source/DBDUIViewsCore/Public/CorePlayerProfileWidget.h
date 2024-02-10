#pragma once

#include "CoreMinimal.h"
#include "PlayerCardViewData.h"
#include "PlayerProfileViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "PlayerProfileClickedDelegate.h"
#include "CorePlayerProfileWidget.generated.h"

class UCoreButtonWidget;
class UCoreWalletWidget;
class UCorePlayerNameWidget;
class UDBDButton;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerProfileWidget : public UCoreBaseUserWidget, public IPlayerProfileViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* PlayerCardButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreWalletWidget* Wallet;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePlayerNameWidget* PlayerName;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDButton* PlayerCardHoverZone;

	UPROPERTY()
	FPlayerProfileClickedDelegate _onPlayerProfileClickedDelegate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _playerCardEnabledOpacity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _playerCardDisabledOpacity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _playerProfileFocusOpacity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _playerProfileUnfocusOpacity;

	UPROPERTY(BlueprintReadOnly)
	bool _isProfileMenuContextEntered;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetPlayerCardAnimation(const bool isAnimationPlaying);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBadgeBannerData(const FPlayerCardViewData& badge, const FPlayerCardViewData& banner, const bool showBanner);

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerProfileClicked(UCoreButtonWidget* button);

	UFUNCTION()
	void OnPlayerCardButtonUnhovered(UCoreButtonWidget* button);

	UFUNCTION()
	void OnPlayerCardButtonHovered(UCoreButtonWidget* button);

	UFUNCTION()
	void OnPlayerCardBannerUnhovered();

	UFUNCTION()
	void OnPlayerCardBannerHovered();

public:
	UFUNCTION()
	virtual void SetPlayerCardEnabled(bool isEnabled) override PURE_VIRTUAL(SetPlayerCardEnabled,);

public:
	UCorePlayerProfileWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerProfileWidget) { return 0; }
